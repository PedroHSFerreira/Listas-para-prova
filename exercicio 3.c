#include <stdio.h>

void main()
{
	int num1, num2, alg1, alg2;
	
	printf("Entre com o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("Entre com segundo numero: ");
	scanf("%d", &num2);
	
	
	alg1 = num2/10;
	alg2 = num2%10;
	
	if((alg2*10) + alg1 == num1)
	{
		printf("e o mesmo numero embaralhado");
		
	}
	else
	{
		printf("nao sao.");
	}
	
	
}
