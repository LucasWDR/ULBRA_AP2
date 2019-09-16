#include<stdio.h>
#include<conio.h>
main()
{
 int v[10], x,valor;
 

    printf("Insira o vetor.\n");
       for(x=0;x<10;x++)
	    {
	    	
	     scanf("%d",&v[x]);
	    }

	printf("entre com valor a ser digitado \n");
	 {
	 scanf("%d",&valor);
	 } 
   
   if(valor==v[x])
   {
  	printf("\n ACHEI");	
   }
   if(valor!=v[x])
   {
   	printf("\n NAO ACHEI");
   }


return 0;
}
