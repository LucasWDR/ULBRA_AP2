#include<stdio.h>
#include<conio.h>
main()
{
int vetipar[5],vetimpar[5];	
int y,x,num,i=0,j=0;

for(x=0;x=30;x++)
{
printf("\n informe os conjuntos de valores: ");
scanf("%d",&num);
if(num%2==0)
{
	vetipar[i]==num;
	i++;
	if(i==5)
	{
		printf("vetor par:");
		for(y=0;y<5;y++)
		{
			printf("%d",vetipar[y]);
		}
	}
	{
		i=0;
	}
}	

else
{
	vetimpar[j]==num;
	j++;
	if(j==5)
	{
		printf("vetor impar:");
		for(y=0;y<5;y++)
		{
			printf("%d",vetimpar[y]);
		}	
	{
		j=0;
	}
   }
}
printf("\n vetor par:");
for(y=0;y<i;y++)
{
	printf("%d",vetipar[x]);
}
printf("\n vetor impar:");
for(y=0;y<j;y++)
{
	printf("%d",vetimpar[y]);
}

 }
}



