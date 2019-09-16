#include<stdio.h>
void classificadupla(int *n1, int *n2)
{
int x;

if(*n1>*n2)
{
	x=*n1;
	*n1=*n2;
	*n2=x;
}
}
 main()
 {
 int n1, n2,x ;
 
 for(x=1;x<=10;x++)
 {
 
 printf("\n digite o primeiro numero:");
 scanf("%d",&n1);

  printf("\n digite o segundo numero:");
 scanf("%d",&n2);
 
 classificadupla(&n1,&n2);
 
 printf("\n ordem crescente");
 printf("\n %d,%d",n1,n2);

 }
}
