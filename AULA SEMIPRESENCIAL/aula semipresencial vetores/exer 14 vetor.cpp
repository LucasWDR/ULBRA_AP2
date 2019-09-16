#include<stdio.h>
main()
{
int x[5], a[10],totalpontos=0,j,x,i;
printf("GABARITO: ");
for (int i = 0; i < LOTO; i++)
scanf("%d", &x);
printf("APOSTA: ");
for (int i = 0; i < 5; i++)
scanf("%d", &a);
for (int i = 0; i <5; i++)
for (int j = 0; j <10; j++)
if (a[j] == x)
{
total_pontos++;	
}
printf("PARABENS VOCE É O GNAHADOR %d:\n",totalpontos);
scanf("%*c");
return 0;

}
