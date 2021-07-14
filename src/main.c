#include <stdio.h>

int calculadoraDeSoma(int numero1, int numero2)
{
    int soma = numero1 + numero2;
    return soma;
}
int calculadoraDeMultiplicacao(int numero1, int numero2)
{
    int multi = numero1 * numero2;
    return multi;
}
float calculadoraDeDivisao(float numero1, float numero2)
{
    return numero1 / numero2;
}
int main()
{

    printf("digite dois números:");
    int a;
    scanf("%d", &a);

    int b;
    scanf("%d", &b);

    printf("\nvoce digitou %d e %d\n", a, b);
    printf("digite uma operação (s=soma, m=multiplicação, d=divisão):");
    getchar();
    char operacao = getchar();
    if (operacao == 's')
    {
        int soma;
        soma = calculadoraDeSoma(a, b);

        printf("\na soma de %d + %d = %d\n", a, b, soma);
    }
    else if (operacao == 'm')
    {
        printf("\na multiplicação de %d x %d = %d\n", a, b, calculadoraDeMultiplicacao(a, b));
    }
    else if (operacao == 'd')
    {
        printf("\na divisão de %d / %d = %f\n", a, b, calculadoraDeDivisao(a, b));
    }
    else
    {
        printf("\nessa opção não existe seu burro\n");
    }

    return 0;
}
