#include<stdio.h>
main()
{

int i=0;
float v1[10],v2[10],v3[10];

for(i=0;i<10;i++)
{

printf("\n Insira o %d%c numero vetor 1:",i+1,167);
scanf("%f",&v1[i]);
printf("\n Insira o %d%c numero vetor 2:",i+1,167);
scanf("%f",&v2[i]);
v3[i]=(v1[i]*v2[i]);
}

printf("\n o resultado %d:%.2f",v3[i]);
}
