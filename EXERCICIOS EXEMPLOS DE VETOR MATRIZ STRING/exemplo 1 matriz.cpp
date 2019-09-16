/
Fazer um algoritmo que leia os valores de duas matrizes 3×3 e imprima a mutiplicação das duas matrizes.
/




#include <stdio.h>
#include <math.h>
#include <string.h>
 
int main(void)
{
int matriz1[3][3], matriz2[3][3], matrizmult[3][3], linha, coluna, i, j, k;
 
// Fazendo Scan da PRIMEIRA matriz :DD
for(linha = 0; linha < 3; linha++){
for( coluna = 0; coluna < 3; coluna++){
scanf("%d",&matriz1[linha][coluna]);
}
}
 
// Fazendo Scan da SEGUNDA matriz :DD
for(linha = 0; linha < 3; linha++){
for( coluna = 0; coluna < 3; coluna++){
scanf("%d",&matriz2[linha][coluna]);
}
}
 
// Zerando matriz da multiplicacao
 
for(i = 0; i < 3; i++){
for(j = 0; j < 3; j++){
matrizmult[i][j]= 0;
}
}
 
// Fazendo Multiplicacao de matrizes :/
for( i = 0; i < 3; i++){  
       for( j = 0; j < 3; j++){   
           for( k = 0; k < 3; k++) {
               matrizmult[i][j] += matriz1[i][k] * matriz2[k][j]; 
}
}
}	
 
// Imprimindo matriz mult
for(linha = 0; linha < 3; linha++){
for( coluna = 0; coluna < 3; coluna++){
if( coluna == 2){
printf("%d\n",matrizmult[linha][coluna]);
}
else{
printf("%d ",matrizmult[linha][coluna]);
}
}
}
return 0;
}
