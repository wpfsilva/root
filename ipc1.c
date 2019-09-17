#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main();
void prog1(),prog2(),prog3(),prog4(),prog5(),prog6(),prog7();

int main()
{
    int a=0;
    while (a != 99) {
    system("cls");
    printf("Digite o numero da funcao a ser acessada\n1 = SOMA DE DOIS NUMEROS\n2 = SOMA + SUBTRACAO + MULTIPLICACAO + DIVISAO DE DOIS NUMEROS\n3 = GASTO MEDIO DE COMBUSTIVEL\n4 = RAIZ QUADRADA\n5 = POTENCIACAO\n6 = LOGARITMO NATURAL\n7 = LOGARITMO DE BASE 10\n99 = SAIR\n");
    scanf("%d", &a);
    if (a == 1)
    {
        prog1();
    }
    else if (a == 2)
    {
        prog2();
    }
    else if (a == 3)
    {
        prog3();
    }
    else if (a == 4)
    {
        prog4();
    }
    else if (a == 5)
    {
        prog5();
    }
    else if (a == 6)
    {
        prog6();
    }
    else if (a == 7)
    {
        prog7();
    }
    else if (a != 0 && 7)
    {
    system("cls");
    printf("Opcao invalida\n");
    system("pause");
    }

    }
    return 0;
    }

void prog1()
{
    double  a,b,resultado;
    system("cls");
    printf("PROGRAMA SOMA DE DOIS NUMEROS \n");
    printf("Some dois numeros\n");
    scanf("%lf%lf", &a, &b);
    resultado = a+b;
    system("cls");
    printf("O resultado da soma e : %.2lf\n", resultado);
    system("pause");
}

void prog2()
{
    double a,b,soma, sub, mult, div;
    system("cls");
    printf("PROGRAMA SOMA + SUBTRACAO + MULTIPLICACAO + DIVISAO\n");
    printf("Digite dois numeros:\n");
    scanf("%lf%lf", &a, &b);
    soma = a+b;
    sub = a-b;
    mult = a*b;
    div = a/b;
    system("cls");
    printf("Os resultados são:\nSoma: %lf\nSubtracao: %lf\nMultiplicacao: %lf\nDivisao: %lf\n", soma,sub,mult,div);
    system("pause");
}

void prog3()
{
    double dist, comb_gasto, resultado;
    system("cls");
    printf("PROGRAMA MEDIA DE CONSUMO COMBUSTIVEL \n");
    printf("Digite a distancia do veiculo\n");
    scanf("%lf", &dist);
    printf("Combustivel gasto");
    scanf("%lf", &comb_gasto);
    resultado = dist / comb_gasto;
    system("cls");
    printf("Gasto medio: %.2lf\n", resultado);
    system("pause");
}

void prog4()
{
    double n, res;
    system("cls");
    printf("PROGRAMA RAIZ QUADRADA\n");
    printf("Digite o numero a ser calculado a raiz quadrada\n");
    scanf("%lf", &n);
    res = sqrt(n);
    system("cls");
    printf("A raiz quadrada de %.2lf = %.2lf\n", n, res);
    system("pause");
}

void prog5()
{
   double  a,b,resultado;
    system("cls");
    printf("PROGRAMA POTENCIACAO \n");
    printf("Variavel\n");
    scanf("%lf", &a);
    printf("Expoente\n");
    scanf("%lf", &b);
    resultado = pow(a, b)	;
    system("cls");
    printf("%.2lf elevado a %.2lf : %.2lf\n",a,b, resultado);
    system("pause");
}

void prog6()
{
   double  a,resultado;
    system("cls");
    printf("PROGRAMA LOGARITMO NATURAL");
    printf("Digite o numero\n");
    scanf("%lf", &a);
    resultado = log(a);
    system("cls");
    printf("O logaritmo natural de %.2f : %.2lf\n",a, resultado);
    system("pause");
}

void prog7()
{
   double  a,b,resultado;
    system("cls");
    printf("PROGRAMA LOGARITMO DE BASE 10 \n");
    printf("Digite o numero\n");
    scanf("%lf", &a);
    resultado = log10(a);
    system("cls");
    printf("O logaritmo de base 10 , %.2lf = %.2lf\n",a, resultado);
    system("pause");
}
