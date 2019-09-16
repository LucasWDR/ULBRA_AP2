#include <stdio.h>
#include <conio.h>
main ()
{int x;
int contador=0;
   printf("Digite o numero da tabuada: ");
   scanf ("%d", &x);

{
	for(contador=0;contador<=10;contador++)
	printf("%d x %d = %d\n",x,contador,x*contador);
}
getche ();
}
