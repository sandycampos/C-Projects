/*  Projeto 3 - Banco
    Descri��o:
    > Devemos desenvolver uma aplica��o onde ao ser inicializada solicite ao usu�rio escolher o que deseja fazer no banco, como criar uma conta, efetuar saque, efetuar dep�sito, efetuar transfer�ncia, listar contas ou sair do sistema.  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h> //sleep
// include <unistd.h> se linux ou mac

typedef struct
{
    int codigo;
    char nome[50];
    char email[50];
    char cpf[20];
    char dataNascimento[20];
    char dataCadastro[20];
} Cliente;

typedef struct
{
    int numero;
    Cliente cliente;
    float saldo;
    float limite;
    float saldoTotal; // saldo + limite
} Conta;

void menu();
void infoCliente(Cliente cliente);
void infoConta(Conta conta);
void criarConta();
void efetuarSaque();
void efetuarDeposito();
void efetuarTransferencia();
void listarContas();
float atualizarSaldoTotal(Conta conta);
Conta buscarContaPorNumero(int numero);
void sacar(Conta conta, float valor);
void depositar(Conta conta, float valor);
void transferir(Conta conta_origem, Conta conta_destino, float valor);

static Conta contas[50];
static int contador_contas = 0;
static int contador_clientes = 0;

int main()
{
    menu();
    return 0;
}

void menu()
{
    int opcao = 0;

    printf("===================================\n");
    printf("=============== ATM ===============\n");
    printf("============ Geek Bank ============\n");
    printf("===================================\n");

    printf("Selecione uma op��o do menu:\n");
    printf("1 - Criar conta\n");
    printf("2 - Efetuar saque\n");
    printf("3 - Efetuar dep�sito\n");
    printf("4 - Efetuar transfer�ncia\n");
    printf("5 - Listar contas\n");
    printf("6 - Sair\n");

    scanf("%d", &opcao);
    getchar();

    switch (opcao)
    {
    case 1:
        criarConta();
        break;
    case 2:
        efetuarSaque();
        break;
    case 3:
        efetuarDeposito();
        break;
    case 4:
        efetuarTransferencia();
        break;
    case 5:
        listarContas();
        break;
    case 6:
        printf("At� a pr�xima!\n");
        Sleep(2000);
        exit(0);
    default:
        printf("Op��o inv�lida.\n");
        Sleep(2000);
        menu();
        break;
    }
}

void infoCliente(Cliente cliente)
{
    printf("C�digo: %d\nNome: %s\nData de nasciment:%s\nCadastro: %s\n", cliente.codigo, strtok(cliente.nome, "\n"), strtok(cliente.dataNascimento, "\n"), strtok(cliente.dataCadastro, "\n"));
}

void infoConta(Conta conta)
{
    printf("N�mero da conta: %d\nCliente: %s\nData de nascimento: %s\nData de cadastro: %s\nSaldo total: %.2f\n", conta.numero, strtok(conta.cliente.nome, "\n"), strtok(conta.cliente.dataNascimento, "\n"), strtok(conta.cliente.dataCadastro, "\n"), conta.saldoTotal);
}

void criarConta()
{
    Cliente cliente;

    // data de cadastro passada pelo sistema (time.h)
    char dia[3]; // 01'\0'
    char mes[3]; // 01'\0'
    char ano[5]; // 2022'\0'
    char data_cadastro[20];
    time_t t = time(NULL);
    struct tm tm = *localtime(&t); // data atual

    // dia: 1 a 31
    if (tm.tm_mday < 10)
        sprintf(dia, "0%d", tm.tm_mday); // 1, 2, 3, 4, 5, 6, 7, 8, 9 = 01, 02...
    else
        sprintf(dia, "%d", tm.tm_mday);

    // m�s: 0 a 11
    if (tm.tm_mon + 1 < 10)
        sprintf(mes, "0%d", tm.tm_mon + 1);
    else
        sprintf(mes, "%d", tm.tm_mon);

    // ano: year - 1900
    sprintf(ano, "%d", tm.tm_year + 1900);

    strcpy(data_cadastro, "");
    strcat(data_cadastro, dia); // 19
    strcat(data_cadastro, "/"); // 19/
    strcat(data_cadastro, mes); // 19/06
    strcat(data_cadastro, "/"); // 19/06/
    strcat(data_cadastro, ano); // 19/06/2022
    strcat(data_cadastro, "\0");
    strcpy(cliente.dataCadastro, data_cadastro);

    // criar o cliente
    printf("Informe os dados do cliente\n");
    cliente.codigo = contador_clientes + 1;

    printf("Nome do cliente: ");
    fgets(cliente.nome, 50, stdin);

    printf("E-mail do cliente: ");
    fgets(cliente.email, 50, stdin);

    printf("CPF do cliente: ");
    fgets(cliente.cpf, 20, stdin);

    printf("Data de nascimento do cliente: ");
    fgets(cliente.dataNascimento, 20, stdin);

    contador_clientes++;

    // criar a conta
    contas[contador_contas].numero = contador_contas + 1;
    contas[contador_contas].cliente = cliente;
    contas[contador_contas].saldo = 0.0;
    contas[contador_contas].limite = 0.0;
    contas[contador_contas].saldoTotal = atualizarSaldoTotal(contas[contador_contas]);

    printf("Conta criada com sucesso!\n");
    printf("\n");
    printf("=== Dados da conta criada ===\n");
    printf("\n");
    infoConta(contas[contador_contas]);
    contador_contas++;
    Sleep(4000);
    menu();
}

float atualizarSaldoTotal(Conta conta)
{
    return conta.saldo + conta.limite;
}

Conta buscarContaPorNumero(int numero)
{
    Conta c;
    if (contador_contas > 0)
    {
        for (int i = 0; i < contador_contas; i++)
        {
            if (contas[i].numero == numero)
                c = contas[i];
        }
    }
    return c;
}

void sacar(Conta conta, float valor)
{
    // h� saldoTotal (saldo + limite) suficiente
    if (valor > 0 && conta.saldoTotal >= valor)
    {
        // varre todas as contas
        for (int i = 0; i < contador_contas; i++)
        {
            // o saque ser� realizado se a conta passada no par�metro existir no meu array de contas
            if (contas[i].numero == conta.numero)
            {
                // h� saldo
                if (contas[i].saldo >= valor)
                {
                    contas[i].saldo = contas[i].saldo - valor;
                    contas[i].saldoTotal = atualizarSaldoTotal(contas[i]);
                    printf("Saque efetuado com sucesso!\n");
                }
                // n�o h� saldo, mas h� limite
                else
                {
                    float restante = contas[i].saldo + valor;
                    contas[i].limite = contas[i].limite - restante;
                    contas[i].saldo = 0.0;
                    contas[i].saldoTotal = atualizarSaldoTotal(contas[i]);
                    printf("Sque efetuado com sucesso!\n");
                }
            }
        }
    }
    else
    {
        printf("Saque n�o realizado. Tente novamente!\n");
        menu();
    }
}

void depositar(Conta conta, float valor)
{
    if (valor > 0)
    {
        for (int i = 0; i < contador_contas; i++)
        {
            if (contas[i].numero == conta.numero)
            {
                contas[i].saldo = contas[i].saldo + valor;
                contas[i].saldoTotal = atualizarSaldoTotal(contas[i]);
                printf("Dep�sito efetuado com sucesso!\n");
            }
        }
    }
    else
    {
        printf("Erro ao efetuar dep�sito. Tente novamente.\n");
        menu();
    }
}

void transferir(Conta conta_origem, Conta conta_destino, float valor)
{
    if (valor > 0 && conta_origem.saldoTotal >= valor)
    {
        // varre contas at� encontrar co (conta origem)
        for (int co = 0; co < contador_contas; co++)
        {
            if (contas[co].numero == conta_origem.numero)
            {
                // varre contas at� encontrar cd (conta destino)
                for (int cd = 0; cd < contador_contas; cd++)
                {
                    if (contas[cd].numero == conta_destino.numero)
                    {
                        if (contas[co].saldo >= valor)
                        {
                            contas[co].saldo = contas[co].saldo - valor;
                            contas[cd].saldo = contas[cd].saldo + valor;
                            contas[co].saldoTotal = atualizarSaldoTotal(contas[co]);
                            contas[cd].saldoTotal = atualizarSaldoTotal(contas[cd]);
                            printf("Transfer�ncia realizada com sucesso!\n");
                        }
                        // limite
                        else
                        {
                            float restante = contas[co].saldo - valor;
                            contas[co].limite = contas[co].limite + restante;
                            contas[co].saldo = 0.0;
                            contas[cd].saldo = contas[cd].saldo + valor;
                            contas[co].saldoTotal = atualizarSaldoTotal(contas[co]);
                            contas[cd].saldoTotal = atualizarSaldoTotal(contas[cd]);
                            printf("Transfer�ncia realizada com sucesso!\n");
                        }
                    }
                }
            }
        }
    }
    else
    {
        printf("Transfer�ncia n�o realizada. Tente novamente.\n");
        menu();
    }
}

void efetuarSaque()
{
    if (contador_contas > 0)
    {
        int numero;
        printf("Informe o n�mero da conta: ");
        scanf("%d", &numero);

        Conta conta = buscarContaPorNumero(numero);

        // dupla verifica��o: buscarContaPorNumero sempre retorna uma conta, cadastrada ou n�o
        if (conta.numero == numero)
        {
            float valor;
            printf("Informe o valor do saque: ");
            scanf("%f", &valor);
            sacar(conta, valor);
        }
        else
        {
            printf("N�o foi encontrada uma conta com o n�mero %d.\n", numero);
        }
    }
    else
    {
        printf("Ainda n�o existem contas para saque.\n");
    }
    Sleep(2000);
    menu();
}

void efetuarDeposito()
{
    if (contador_contas > 0)
    {
        int numero;
        printf("Informe o n�mero da conta: ");
        scanf("%d", &numero);

        Conta conta = buscarContaPorNumero(numero);

        // dupla verifica��o: buscarContaPorNumero sempre retorna uma conta, cadastrada ou n�o
        if (conta.numero == numero)
        {
            float valor;
            printf("Informe o valor do dep�sito: ");
            scanf("%f", &valor);
            depositar(conta, valor);
        }
        else
        {
            printf("N�o foi encontrada uma conta com o n�mero %d.\n", numero);
        }
    }
    else
    {
        printf("Ainda n�o existem contas para dep�sito.\n");
    }
    Sleep(2000);
    menu();
}

void efetuarTransferencia()
{
    if (contador_contas > 0)
    {
        int n_origem, n_destino;
        printf("Informe o n�mero da sua conta: ");
        scanf("%d", &n_origem);

        Conta c_origem = buscarContaPorNumero(n_origem);

        if (c_origem.numero == n_origem)
        {
            printf("Informe o n�mero da conta de destino: ");
            scanf("%d", &n_destino);

            Conta c_destino = buscarContaPorNumero(n_destino);

            if (c_destino.numero == n_destino)
            {
                float valor;
                printf("Informe o valor para transfer�ncia: ");
                scanf("%f", &valor);
                transferir(c_origem, c_destino, valor);
            }
            else
            {
                printf("A conta de destino com o n�mero %d n�o foi encontrada.\n", n_destino);
            }
        }
        else
        {
            printf("A conta com o n�mero %d n�o foi encontrada.\n", n_origem);
        }
    }
    else
    {
        printf("Ainda n�o existem contas para transfer�ncia.\n");
    }
    Sleep(2000);
    menu();
}

void listarContas()
{
    if (contador_contas > 0)
    {
        for (int i = 0; i < contador_contas; i++)
        {
            infoConta(contas[i]);
            printf("\n");
            Sleep(1000);
        }
    }
    else
    {
        printf("N�o existem contas cadastradas.\n");
    }
    Sleep(2000);
    menu();
}
