#include<stdio.h>
#include<math.h>

int main()
{
    int n;

    scanf("%d", &n);

    if (n == (n/3)*3)
    {
        if(n == (n/5)*5)
        {
            printf("O NUMERO E DIVISIVEL");
        }
        else
        {
            printf("O NUMERO NAO E DIVISIVEL");
        }
    }
    else
    {
        printf("O NUMERO NAO E DIVISIVEL");
    }
    
    return 0;
}