#include <stdio.h>


void main()
{
	int numero, i, cont=0;
	
	printf("Digite o numero: ");
	scanf("%d", &numero);
	
	for(i=1;i<=numero;i++)
	{
		
		if (numero%i==0)
		{
			cont++;
		}
	}
	
	if(cont ==2)
	{
		printf("Numero primo");
	}
	else
	{
		printf("Numero nao primo.");
	}
}
