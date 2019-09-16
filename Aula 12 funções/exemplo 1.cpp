#include<stdio.h>
#include<>
int absoluto(int num1, int num2)
{
int result;
result=num1 + num2;

return(result);
	
}
main()
{
	int n1,n2,r;
	printf("\n digite o numero:");
	scanf("%d",&n1);
	printf("\n digite outro numero:");
	scanf("%d",&n2);

printf("O resultado =%d",absoluto(n1,n2));

	
}
