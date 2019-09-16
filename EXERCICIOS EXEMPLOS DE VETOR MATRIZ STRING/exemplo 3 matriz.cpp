/
Escrever um algoritmo para ler uma matriz (7,4) contendo valores inteiros (supor que os

valores são distintos). Após, encontrar o menor valor contido na matriz e sua posição.
/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int procura_na_matriz(int valor, int matriz[7][4])
{
int i, j;

  for (i=0; i<7; i++)
	for (j=0; j<4; j++)
	  if (matriz[i][j] == valor)
		return 1;
		
  return 0;
}

int main (void){
int M[7][4];
int i,j,m,pi,pj;

//inicializando a matriz, com zeros
for (i=0; i<7; i++)
  for (j=0; j<4; j++)
	M[i][j] = 0;
//Montando uma Matriz M insirindo valores, coloquei a opção de números randômicos até 20 para teste:
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
   //M[i][j]= rand()%20;
   printf("Insira M[%d][%d]:",i,j);
   scanf("%d",&m);
   while (procura_na_matriz(m, M))
   {
	  printf("Insira novamente:");
	  scanf("%d", &m);
   }
   
   M[i][j] = m;
}}

//Achando e escrevendo o menor e sua posição:
m= M[0][0];
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
   if (M[i][j]<m){
	m= M[i][j];
	pi= i;
	pj= j;
}}}

printf("O menor valor é M[%d][%d]=%d.",pi,pj,M[pi][pj]);

return 0;
}

