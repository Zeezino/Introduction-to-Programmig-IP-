#include<stdio.h>
#include<math.h>

int main()
{
    int x1, x2, x3, expressao, resto, n;
    
    scanf("%d", &n);
    
    x1 = n/100;
    x2 = (n%100)/10;
    x3 = (n%100)%10;
    
    expressao = x1 + (x2*3) + (x3*5);
    resto = expressao % 7;
    
    printf("O NOVO NUMERO E = %d%d%d%d\n", x1, x2, x3, resto);
    
    return 0;
}
