/
 Escrever um algoritmo para armazenar valores inteiros em uma matriz (5,6). A seguir,

calcular a média dos valores pares contidos na matriz e escrever seu conteúdo
/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
 int  M[5][6];
 int i,j,x;
 float par;

 x=0;
 par=0;

//Montando uma Matriz M insirindo valores, acumulando em "par" se o valor for par e com um contador x, coloquei a opção de núemros randômicos até 20 para teste:
 for(i=0;i<5;i++){
  for(j=0;j<6;j++){
   //M[i][j]= rand()%20;
   printf("Insira M[%d][%d]:",i,j);
   scanf("%d",&M[i][j]); 
   if ("M[i][j]%2==0"){
	par= (par+M[i][j]);
	x= (x+1);
