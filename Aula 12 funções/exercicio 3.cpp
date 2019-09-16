
#include<stdio.h>

int Somatorio(int valor)
{
int result, x, cont=0;
    result = valor;
    for(x=0; x<valor; x++)
    {
        result = result + cont++;
    }
    if(result >= valor)
    {
        return(result);
    }
}

void LePositivo()
{
int numero[5];
int x;

    for(x=0; x<5; x++)
    {
        printf("\nDigite um numero: ");
        scanf("%d", &numero[x]);
        if(numero[x] <= 0)
        {
            do{
                printf("\nNumero incorreto, digite-o novamente: ");
            }while(numero[x] <= 0);
        }
    }

    for(x=0; x<5; x++)
    {
        printf("\nA soma de 1 ate %d e = %d", numero[x], Somatorio(numero[x]));
    }
}


main()
{
    LePositivo();
}
