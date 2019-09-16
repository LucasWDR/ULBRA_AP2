 #include<stdio.h>
#include<conio.h>
main()
{
	int vetor[30],numero[30], menor, x;
	printf("digite os numeros:");
		scanf("%d",&vetor[x]);
			for (x=0;x<30;x++)
	printf("\n numero=");
	for(numero=0;numero<30;numero++)
	scanf("%d"&numero);
	
	menor = vetor[0];
	for (x=1;x<30;x++)
  	{
		if (vetor[x]<=menor)
		 {
    	vetor[x]=menor;
		}
	}

printf("O menor elemento:%d\n", menor, x);
	}
	return 0;
}
