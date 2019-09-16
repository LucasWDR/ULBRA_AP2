#include<stdio.h>
main()
{
int p1[15],p2[15],i,n[30],y=0,x=0;
for(x=1;x<10;x++)
printf("escreve os numeros desejados:");
scanf("%d",&n);
 for (i=0; i<30; i++)
    {
if(n[x]%2 == 0){
 p1[x]=n[i];
 x++; 
   }   
 else{
 p2[y]=n[i];
  y++;
     }   
     } 
    printf("Numeros pares digitados\n");
    for (i=0; i<x; i++)
         printf("\n\n%d",p1[i]); 
    printf("Numeros impares digitados\n");
    for (i=0; i<y; i++)
         printf("\n\n%d",p2[i]);

}
}

