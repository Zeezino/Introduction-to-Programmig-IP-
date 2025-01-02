#include <stdio.h>

int main()
{
    int vet[5000], n, i, j, qntd_iguais=0, qntd_iguais_final=0;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &vet[i]);

        for(j=0; j<n; j++)
        {
            if(j==i) vet[j]=vet[i];
        }
    }

    for(i=0; i<n; i++)
    {

        for(j=0; j<n; j++)
        {
            if(vet[j]==vet[i] && j!=i)
            {
                qntd_iguais+=1;

                if(qntd_iguais_final<qntd_iguais)
                {
                qntd_iguais_final = qntd_iguais+1;
                }
            }
        }
    }

    n-=qntd_iguais_final;

    printf("%d\n", n);

    return 0;
}