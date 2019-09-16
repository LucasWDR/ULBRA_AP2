#include<stdio.h>
#include<conio.h>
main()
{
	int vetor[10],soma=0,x=0;	
	
	printf("Insira o vetor.\n");
       for(x=0;x<10;x++)
	    {
	    	
	     scanf("%d",vetor[x]);
	    }
	    for(x=0;x<10;x++) 
	    
		if (vetor[x]>10) 
		soma+=vetor[x];
		{
       x++;
		}
		printf("informe um numero.\n");
		scanf("%d",&vetor[x]);
		printf("a soma dos numeros :%d\n",soma);
	
}

