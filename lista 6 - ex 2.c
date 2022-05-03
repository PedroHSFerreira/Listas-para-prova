#include <stdio.h>

void main()
{
	int i, n, maiorNumero = 0,  menorNumero = 10000, numero;
	
	printf("Entre com o total de valores q quer comparar: ");
	scanf("%d", &n);
	for(i=0;i<=n;i++)
	{
		printf("Entre com o valor: ");
		scanf("%d", &numero);
		
		if(numero>maiorNumero)
		{
			maiorNumero = numero;
		}
		if(numero<menorNumero)
		{
			menorNumero = numero;
		}
		
	}
	printf("Menor Numero = %d\n", menorNumero);
	
	printf("Maior Numero = %d", maiorNumero);
	
	
	
	
	
}
