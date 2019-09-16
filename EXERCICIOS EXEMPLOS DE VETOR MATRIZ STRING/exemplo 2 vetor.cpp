
/
Fazer um algorítimo que seja lido um número inteiro X e preencha um vetor com os divisores de X,
começando do X até o número 1. Imprimir o vetor em ordem inversa (de trás para frente).
/



#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void)
{
int numero, divisores, numerodivisores =0,vetor[numerodivisores], contador=0;

scanf("%d",&numero);
for (divisores = 1; divisores <= numero; divisores++){

if (numero % divisores == 0){
vetor[contador] = divisores;
contador++;
numerodivisores++;
}
}

for(contador =0; contador < numerodivisores; contador++){
printf("%d\n",vetor[contador]);
}

return 0;
}
