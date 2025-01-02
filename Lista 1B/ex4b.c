#include<stdio.h>
#include<math.h>

int main()
{
    double horas, d3, d5;

    scanf("%f", &horas);

    if(horas == (horas/3)*3)
    {
        d3 = horas/3;
        d5 = 0;
        printf("O VALOR A PAGAR E = %.2lf", (d3*10) + (d5*5));
    }

    if(horas - 1 == ((horas - 1)/3)*3)
    {
        d3 = (horas - 1)/3;
        d5 = 1;
        printf("O VALOR A PAGAR E = %.2lf", (d3*10) + (d5*5));
    }

    if(horas - 2 == ((horas - 2 )/3)*3)
    {
        d3 = (horas - 2)/3;
        d5 = 2;
        printf("O VALOR A PAGAR E = %.2lf", (d3*10) + (d5*5));
    }

    return 0;
}