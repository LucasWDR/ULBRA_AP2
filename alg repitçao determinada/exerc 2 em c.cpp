#include <stdio.h>
#include <conio.h>
main ()
{ int i;
 char numero[30];
  printf("Digite um numero ");
  scanf("%d",&numero);
  for(i=0; i<10; i++)
  {
    printf("%i = %s\n", i+1, numero);        
  }
getche ();
}
