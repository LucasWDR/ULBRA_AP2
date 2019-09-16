#include<stdio.h>
#include<conio.h>
main()
{
int vetor[20],x, quant=0;
printf("digite os numeros:\n");
       for(x=0;x<20;x++)
scanf("%d",&vetor[x]);
      
      for(x=0;x<20;x++)
      
      	if (vetor[x] % 2==0)
      	{
        quant++;
	    }
	    
	 printf(" a quantida de pares:%d",quant);
	  
}

