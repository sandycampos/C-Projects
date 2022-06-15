/*  melhorias:
    unir funções de operação
    enxugar a função jogar()   */

#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int dificuldade;
    int valor1;
    int valor2;
    int operacao;
    long resultado;
}Calcular;

void jogar();
int somar(int resposta, Calcular calc);
int diminuir(int resposta, Calcular calc);
int multiplicar(int resposta, Calcular calc);

int pontos = 0;

int main(){
    srand(time(NULL));
    jogar();
    return 0;
}

void jogar(){
    Calcular calc;

    calc.dificuldade = rand() % 5;
    calc.operacao = rand() % 3;

    if(calc.dificuldade == 1){
        calc.valor1 = rand() % 11;
        calc.valor2 = rand() % 11;
    }
    else if(calc.dificuldade == 2){
        calc.valor1 = rand() % 101;
        calc.valor2 = rand() % 101;
    }
    else if(calc.dificuldade == 3){
        calc.valor1 = rand() % 1001; 
        calc.valor2 = rand() % 1001;
    }
    else if(calc.dificuldade == 4){
        calc.valor1 = rand() % 10001;
        calc.valor2 = rand() % 10001;
    }
    else{
        calc.valor1 = rand() % 100001;
        calc.valor2 = rand() % 100001;
    }

    int resposta;
    printf("Informe o resultado para a seguinte operação:\n");

    if(calc.operacao == 0){
        printf("%d + %d\n", calc.valor1, calc.valor2);
        scanf("%d", &resposta);

        if(somar(resposta, calc)){
            pontos++;
            printf("Você tem %d ponto(s).\n", pontos);
        }
    }
    else if(calc.operacao == 1){
        printf("%d - %d\n", calc.valor1, calc.valor2);
        scanf("%d", resposta);

        if(diminuir(resposta, calc)){
            pontos++;
            printf("Você tem %d ponto(s).\n", pontos);
        }
    }
    else if(calc.operacao == 2){
        printf("%d * %d\n", calc.valor1, calc.valor2);
        scanf("%d", &resposta);

        if(multiplicar(resposta,calc)){
            pontos++;
            printf("Você tem %d ponto(s).\n", pontos);
        }
    }
    else
        printf("A operação %d não é reconhecida.\n", calc.operacao);

    continuar();
}

int somar(int resposta, Calcular calc){
    calc.resultado = calc.valor1 + calc.valor2;
    int certo = 0;

    if(resposta == calc.resultado){
        printf("Resposta correta!\n");
        certo = 1;
    }else
        printf("Resposta errada!\n");

    printf("%d + %d = %ld\n", calc.valor1, calc.valor2, calc.resultado);

    return certo;
}

int diminuir(int resposta, Calcular calc){
    calc.resultado = calc.valor1 - calc.valor2;
    int certo = 0;

    if(resposta == calc.resultado){
        printf("Resposta correta!\n");
        certo = 1;
    }else
        printf("Resposta errada!\n");

    printf("%d - %d = %ld\n", calc.valor1, calc.valor2, calc.resultado);

    return certo;
}

int multiplicar(int resposta, Calcular calc){
    calc.resultado = calc.valor1 * calc.valor2;
    int certo = 0;

    if(resposta == calc.resultado){
        printf("Resposta correta!\n");
        certo = 1;
    }else
        printf("Resposta errada!\n");

    printf("%d * %d = %ld\n", calc.valor1, calc.valor2, calc.resultado);

    return certo;
}

void continuar(){
    printf("Deseja continuar jogando? [1- sim, 0 - não]\n");
    int continuar;
    scanf("%d", &continuar);

    if(continuar == 1)
        jogar();
    else
        printf("Você finalizou com %d ponto(s).\n", pontos);
        printf("Até a próxima.");
        exit(0);
}
