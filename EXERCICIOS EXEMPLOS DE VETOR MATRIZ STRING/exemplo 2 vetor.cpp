
/
Fazer um algor�timo que seja lido um n�mero inteiro X e preencha um vetor com os divisores de X,
come�ando do X at� o n�mero 1. Imprimir o vetor em ordem inversa (de tr�s para frente).
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
