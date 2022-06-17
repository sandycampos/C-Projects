/*  Projeto 2 - Mercado
    Descrição:
    > Devemos desenvolver uma aplicação onde ao ser inicializada apresente ao usuário um menu onde seja possível cadastrar, listar e comprar produtos, além de visualizar carrinho de compra ou sair da aplicação.
    > Ao adicionar um produto no carrinho de compras, deve-se verificar se já existe um mesmo produto no carrinho, bastando alterar a quantidade.
    > Ao finalizar a compra deve ser apresentado ao usuário o total de acordo com os produtos e quantidades inseridas no carrinho de compra.    */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h> //para pausar o programa por alguns segundos (sleep)
//#include <unistd.h> se linux ou mac

typedef struct
{
    int codigo;
    char nome[30];
    float preco;
} Produto;

typedef struct
{
    Produto produto;
    int quantidade;
} Carrinho; // cada item do carrinho

void infoProduto(Produto prod);
void menu();
void cadastrarProduto();
void listarProdutos();
void comprarProduto();
void visualizarCarrinho();
Produto pegarProdutoPorCodigo(int codigo);
int *temNoCarrinho(int codigo); // retorna um array de inteiros
void fecharPedido();

static int contador_produto = 0; // produtos cadastrados
static int contador_carrinho = 0;
static Carrinho carrinho[50]; // adicionar os produtos no carrinho
static Produto produtos[50];  // cadastrar os produtos em um array

int main()
{
    menu();
    return 0;
}

void infoProduto(Produto prod)
{
    printf("Código: %d\nNome: %s\nPreço: %.2f\n", prod.codigo, strtok(prod.nome, "\n"), prod.preco);
}

void menu()
{
    printf("==================================\n");
    printf("========== Bem-vindo(a) ==========\n");
    printf("=========== Geek Shop ============\n");
    printf("==================================\n");
    printf("Selecione uma opção:\n");
    printf("1 - Cadastrar produto\n");
    printf("2 - Listar produtos\n");
    printf("3 - Comprar produto\n");
    printf("4 - Visualizar carrinho\n");
    printf("5 - Fechar pedido\n");
    printf("6 - Sair do sistema\n");

    int opcao;
    scanf("%d", &opcao);
    getchar(); // para não pular linha ao receber uma string depois de um valor inteiro

    switch (opcao)
    {
    case 1:
        cadastrarProduto();
        break;
    case 2:
        listarProdutos();
        break;
    case 3:
        comprarProduto();
        break;
    case 4:
        visualizarCarrinho();
        break;
    case 5:
        fecharPedido();
        break;
    case 6:
        printf("Volte sempre!\n");
        Sleep(2000); // sleep(2) se linux ou mac
        exit(0);
    default:
        printf("Opção inválida.\n");
        Sleep(2000);
        menu();
        break;
    }
}

void cadastrarProduto()
{
    printf("Cadastro de Produto\n");
    printf("===================\n");

    printf("Informe o nome do produto:\n");
    fgets(produtos[contador_produto].nome, 30, stdin);

    printf("Informe o preço do produto:\n");
    scanf("%f", &produtos[contador_produto].preco);

    printf("O produto %s foi cadastrado com sucesso.\n", strtok(produtos[contador_produto].nome, "\n"));

    // código != índice, logo: o código do primeiro produto é 1 e possui o índice 0 dentro do array
    produtos[contador_produto].codigo = contador_produto + 1;
    contador_produto++;

    Sleep(2000);
    menu();
}

void listarProdutos()
{
    if (contador_produto > 0)
    {
        printf("Listagem de Produtos\n");
        printf("---------------------\n");
        for (int i = 0; i < contador_produto; i++)
        {
            infoProduto(produtos[i]);
            printf("-------------------\n");
            Sleep(1);
        }
        Sleep(2000);
        menu();
    }
    else
        printf("Não temos produtos cadastrados.\n");
    Sleep(2000);
    menu();
}

void comprarProduto()
{
    // se existe produto cadastrado
    if (contador_produto > 0)
    {
        printf("Informe o código do produto que deseja adicionar ao carrinho.\n");

        // se não souber o código
        printf("======== Produtos Disponíveis =======\n");
        for (int i = 0; i < contador_produto; i++)
        {
            infoProduto(produtos[i]);
            printf("-----------------------------------\n");
            Sleep(1000);
        }

        int codigo;
        scanf("%d", &codigo);
        getchar();

        // se o código informado pertence a algum produto cadastrado
        int tem_mercado = 0;
        for (int i = 0; i < contador_produto; i++)
        {
            if (produtos[i].codigo == codigo)
            {
                // existe um produto com o código informado
                tem_mercado = 1;
                if (contador_carrinho > 0)
                {
                    // verifica se o produto já está no carrinho
                    int *retorno = temNoCarrinho(codigo);
                    if (retorno[0] == 1)
                    {
                        carrinho[retorno[1]].quantidade++;
                        printf("Aumentei a quantidade do produto %s já existente no carrinho.\n", strtok(carrinho[retorno[1]].produto.nome, "\n"));
                        Sleep(2000);
                        menu();
                    }
                    // existe produto no carrinho, mas não este
                    else
                    {
                        Produto p = pegarProdutoPorCodigo(codigo);
                        carrinho[contador_carrinho].produto = p;
                        carrinho[contador_carrinho].quantidade = 1;
                        contador_carrinho++;
                        printf("O produto %s foi adicionado ao carrinho.\n", strtok(p.nome, "\n"));
                        Sleep(2000);
                        menu();
                    }
                }
                // não existe produto no carrinho
                else
                {
                    Produto p = pegarProdutoPorCodigo(codigo);
                    carrinho[contador_carrinho].produto = p;
                    carrinho[contador_carrinho].quantidade = 1;
                    contador_carrinho++;
                    printf("O produto %s foi adicionado ao carrinho.\n", strtok(p.nome, "\n"));
                    Sleep(2000);
                    menu();
                }
            }
        }
        // não existe produto com o código informado
        if (tem_mercado < 1)
        {
            printf("Não foi encontrado o produto com código %d.\n", codigo);
            Sleep(2000);
            menu();
        }
    }
    else // se não existe produto cadastrado
    {
        printf("Ainda não existem produtos para vender.\n");
        Sleep(2000);
        menu();
    }
}

void visualizarCarrinho()
{
    if (contador_carrinho > 0)
    {
        printf("Produtos do Carrinho\n");
        printf("--------------------\n");

        for (int i = 0; i < contador_carrinho; i++)
        {
            infoProduto(produtos[i]);
            printf("Quantidade: %d\n", carrinho[i].quantidade);
            printf("-----------------------\n");
            Sleep(1000);
        }
        Sleep(2000);
        menu();
    }
    else
        printf("Você não tem produtos no carrinho.\n");
    Sleep(2000);
    menu();
}

Produto pegarProdutoPorCodigo(int codigo)
{
    Produto p;

    for (int i = 0; i < contador_produto; i++)
    {
        if (produtos[i].codigo == codigo)
            p = produtos[i];
    }
    return p;
}

int *temNoCarrinho(int codigo)
{
    // C não permite retornar um array, mas permite retornar um ponteiro (todo array possui ponteiros)
    int static retorno[] = {0, 0};

    for (int i = 0; i < contador_carrinho; i++)
    {
        if (carrinho[i].produto.codigo == codigo)
        {
            retorno[0] = 1; // tem o produto com este código no carrinho
            retorno[1] = i; // o índice do produto no carrinho
        }
    }
    return retorno;
}

void fecharPedido()
{
    if (contador_carrinho > 0)
    {
        float valorTotal = 0.0;
        printf("Produtos do Carrinho\n");
        printf("--------------------\n");

        for (int i = 0; i < contador_carrinho; i++)
        {
            Produto p = carrinho[i].produto;
            int quantidade = carrinho[i].quantidade;
            valorTotal += p.preco * quantidade;
            infoProduto(p);
            printf("Quantidade: %d\n", quantidade);
            printf("---------------\n");
            Sleep(1000);
        }
        printf("Sua fatura é %.2f\n", valorTotal);

        // limpar carrinho
        contador_carrinho = 0;
        printf("Obrigado pela preferência.\n");
        Sleep(5000);
        menu();
    }
    else
        printf("Você não tem produtos no carrinho.\n");
    Sleep(3000);
    menu();
}
