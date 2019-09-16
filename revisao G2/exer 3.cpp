#include<stdio.h>
#include<string.h>

void le_matriz(int matriza[4][4])
{
int l,c;

for(l=0;l<4;l++)
 for(c=0;c<4;c++)
 {
 	printf("\n Digite um numero real [%d][%d]",l,c);
	 scanf("\n %d,&matriza[l][c]"); 
 }
	
}

int posicoes_iguais(int matriza[4][4],int matrizb[4][4])
{
int l,c,cont;

for(l=0;l<4;l++)
 for(c=0;c<4;c++)
{
	if(matriza[l][c]==matrizb[l][c])
{
        cont++;	
	}	
	}
	return(cont);	
}

main()
{
int cont,l,c;
int matriz1[4][4],matriz2[4][4];

le_matriz(matriz1);
printf("\n===== Outra matriz ======== ");
le_matriz(matriz2);

cont=posicoes_iguais(matriz1,matriz2);

printf("\n Numero de elementos iguais em posicoes iguais:%d",cont);	
}

