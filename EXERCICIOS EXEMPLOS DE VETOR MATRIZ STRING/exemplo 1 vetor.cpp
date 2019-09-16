/ 
*Leia um vetor contendo 10 números, que correspondem a matrículas de alunos.
 Ler 3 matrículas e imprima uma mensagem informando se eles estão ou não presentes no vetor.*
/

#include<math.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
{
	int vetor[10],contagem, verificanumero, contagemverifica = 0, contemcerto = 0;

	for(contagem = 0; contagem < 10; contagem++){

		scanf("%d",&vetor[contagem]);

	}

	while (contagemverifica < 3){

	scanf("%d",&verificanumero);

		for(contagem = 0; contagem < 10; contagem++){

			if (verificanumero == vetor[contagem]){
				printf("A matricula %d esta presente no sistema\n",verificanumero);
				contemcerto++;
			}

		}
			if(contemcerto == 0){
				printf("A matricula %d nao esta presente no sistema\n",verificanumero);
			}

	contagemverifica++;
	contemcerto = 0;
	}

	return 0;
}	
	
	
