#include <stdio.h>

void main()
{
	int num1, num2, cont1=0, cont2=0, i, j;
	
	printf("Entre com o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("Entre com o segundo numero: ");
	scanf("%d", &num2);
	
	for(i=1;i<=num1;i++)
	{
		if (num1%i==0)
		{
			cont1++;
		}
	}
	
	for(j=1;j<=num2;j++)
	{
		if(num2%j==0)
		{
			cont2++;
		}
	}
	
	if(cont1==2 && cont2==2)
	{
		printf("são numeros primos entre si.");
	}
	else
	{
		printf("nao sao numeros primos entre si.");
	}
	
	
}
