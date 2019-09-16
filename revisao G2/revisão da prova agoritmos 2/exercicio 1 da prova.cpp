#include<stdio.h>
#include<conio.h>
main()
{
char vetg[20],vetr[20];
int i,j,x,cont=0;


for(i=0;i<20;i++)
{
printf("coloque o gabarito da prova:",i+1);
scanf("%c",&vetg[i]);
fflush(stdin);
}

for(x=0; x<30;x++)
{
for(i=0;i<20;i++)
{
printf("a nota  do aluno da prova:",i+1);
scanf("%c",&vetr[i]);
fflush(stdin);
if(vetg[i]== vetr[j])
{
	cont++;
}
j++;
}
printf("numero de acertos:",cont);
if(cont>=12)
{
	printf("APROVADO");
}
else
{
	printf("REPROVADO");
}
cont=0;
}
}



