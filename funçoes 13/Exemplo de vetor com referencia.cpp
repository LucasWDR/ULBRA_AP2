#include<stdio.h>
void levetor(int vetor[5])
{
int i;

for(i=0; i<5;i++)
{
	printf("\n vetor[%d]:",i);
	scanf("%d",&vetor[i]);
	}	
}

void soma (int v1[5], int v2[5], int v3[5])
{
	int i;
	for(i=0;i<5;i++)
	v3[i]=v1[i]+ v2[i];
}
main()
{
	int a[5], b[5],c[5],i;
	printf("\n Primeiro vetor:");
	levetor(a);
	printf("\n Segundo vetor:");
	levetor(b);
	
	soma(a,b,c);
	
	for(i=0;i<5;i++)
	printf("\n vetor soma[%d]:%d ",i,c[i]);
}
