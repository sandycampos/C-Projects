/*  Projeto 1 - Game
    Descri��o:
    -> Devemos desenvolver uma palica��o onde ao ser inicializada solicite ao usu�rio escolher o n�vel de dificuldade do jogo e ap�s isso gera e apresenta, de forma aleat�ria, um c�lculo para que possamos informar o resultado.
    -> Iremos limitar as opera��o em somar, diminuir e multiplicar.
    -> Se o usu�rio acertar a resposta, somar� 1 ponto ao seu score.
    -> Acertando ou errando, ele poder� ou n�o continuar o jogo. */

#include<stdio.h> //biblioteca standard io
#include<stdlib.h> //biblioteca padr�o

typedef struct{
    int dificuldade;
    int valor1;
    int valor2;
    int operacao;
    int resultado;
}Calcular;

void jogar();
void mostrarInfo(Calcular calc);
int somar(int resposta, Calcular calc);
int diminuir(int resposta, Calcular calc);
int multiplicar(int resposta, Calcular calc);

int pontos = 0;

int main(){
    //deve ser chamado apenas 1 vez
    srand(time(NULL));
    jogar();
    return 0;
}

void jogar(){
    Calcular calc; //vari�vel do tipo Calcular (struct)
    int dificuldade;

    printf("Informe o n�vel de dificuldade desejado [1, 2, 3 ou 4]: ");
    scanf("%d", &dificuldade);
    calc.dificuldade = dificuldade;

    //gera um valor interiro rand�mico entre 0 e 2 (somar, diminuir, multiplicar)
    calc.operacao = rand() % 3;

    if(calc.dificuldade == 1){
        //f�cil
        calc.valor1 = rand() % 11; //0 a 10
        calc.valor2 = rand() % 11;
    }
    else if(calc.dificuldade == 2){
        //m�dio
        calc.valor1 = rand() % 101; //0 a 100
        calc.valor2 = rand() % 101;
    }
    else if(calc.dificuldade == 3){
        //dif�cil
        calc.valor1 = rand() % 1001; //0 a 1 000
        calc.valor2 = rand() % 1001;
    }
    else if(calc.dificuldade == 4){
        //insano
        calc.valor1 = rand() % 10001; //0 a 10 000
        calc.valor2 = rand() % 10001;
    }
    else{
        //ultra
        calc.valor1 = rand() % 100001; //0 a 10 0000
        calc.valor2 = rand() % 100001;
    }

    int resposta;
    printf("Informe o resultado para a seguinte opera��o:\n");

    //somar
    if(calc.operacao == 0){
        printf("%d + %d\n", calc.valor1, calc.valor2);
        scanf("%d", &resposta);

        if(somar(resposta, calc)){ //se verdadeiro
            pontos++;
            printf("Voc� tem %d ponto(s).\n", pontos);
        }
    }
    //diminuir
    else if(calc.operacao == 1){
        printf("%d - %d\n", calc.valor1, calc.valor2);
        scanf("%d", resposta);

        if(diminuir(resposta, calc)){
            pontos++;
            printf("Voc� tem %d ponto(s).\n", pontos);
        }
    }
    //multiplicar
    else if(calc.operacao == 2){
        printf("%d * %d\n", calc.valor1, calc.valor2);
        scanf("%d", &resposta);

        if(multiplicar(resposta,calc)){
            pontos++;
            printf("Voc� tem %d ponto(s).\n", pontos);
        }
    }
    //desconhecida
    else
        printf("A opera��o %d n�o � reconhecida.\n", calc.operacao);

    //mostrarInfo(calc);

    //recome�ar o jogo?
    printf("Deseja continuar jogando? [1- sim, 0 - n�o]\n");
    int continuar;
    scanf("%d", &continuar);

    if(continuar == 1)
        jogar();
    else
        printf("Voc� finalizou com %d ponto(s).\n", pontos);
        printf("At� a pr�xima.");
        exit(0);
}

void mostrarInfo(Calcular calc){
    char op[25];

    if(calc.operacao == 0) //0 == somar
        sprintf(op, "Somar"); //string printf: "Somar" -> op
    else if(calc.operacao == 1) //1 == diminuir
        sprintf(op, "Diminuir");
    else if(calc.operacao == 2) //2 == multiplicar
        sprintf(op, "Multiplicar");
    else
        sprintf(op, "Opera��o desconhecida");

    printf("\nValor 1: %d\n\Valor 2: %d\nDificuldade: %d\nOpera��o: %s\n\n", calc.valor1, calc.valor2, calc.dificuldade, op);

}

int somar(int resposta, Calcular calc){
    int resultado = calc.valor1 + calc.valor2;
    calc.resultado = resultado;
    int certo = 0; //0 == errou, 1 == acertou

    if(resposta == calc.resultado){
        printf("Resposta correta!\n");
        certo = 1;
    }else
        printf("Resposta errada!\n");

    printf("%d + %d = %d\n", calc.valor1, calc.valor2, calc.resultado);

    return certo;
}

int diminuir(int resposta, Calcular calc){
    int resultado = calc.valor1 - calc.valor2;
    calc.resultado = resultado;
    int certo = 0; //0 == errou, 1 == acertou

    if(resposta == calc.resultado){
        printf("Resposta correta!\n");
        certo = 1;
    }else
        printf("Resposta errada!\n");

    printf("%d - %d = %d\n", calc.valor1, calc.valor2, calc.resultado);

    return certo;
}

int multiplicar(int resposta, Calcular calc){
    int resultado = calc.valor1 * calc.valor2;
    calc.resultado = resultado;
    int certo = 0; //0 == errou, 1 == acertou

    if(resposta == calc.resultado){
        printf("Resposta correta!\n");
        certo = 1;
    }else
        printf("Resposta errada!\n");

    printf("%d * %d = %d\n", calc.valor1, calc.valor2, calc.resultado);

    return certo;
}
