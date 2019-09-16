#include<stdio.h>
main()
{
int v[10],x;
int j=0;
for(j=0; j<10; j++){

 printf("Insira o %d%c numero: ",j+1,167); 
 scanf("%d", &v[j]); 
}
printf("Digite um numero inteiro:"); 
scanf("%d",&x); 
for(j=0; j<10; j++)
if(x == v[j]){ 
printf("%d = %d\n",j,x); 
}
if(x!=v[j])
printf("valor não encontrado");
}

