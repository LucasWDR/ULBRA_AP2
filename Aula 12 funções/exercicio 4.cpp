#include<stdio.h>
 troca (char *letra,char *letra2)
{
	char aux;
	
     aux=*letra;
	*letra=*letra2;
	*letra2=aux;
}
main()
{
char letra,letra2;
printf("\n A primeira letra:");
scanf("%c",&letra);
	fflush(stdin);
printf("\n A segunda letra:");
scanf("%c",&letra2);
	fflush(stdin);
troca(&letra,&letra2);
printf("\n A Letra:  %c",letra);
printf("\n A Letra:  %c",letra2);
}
