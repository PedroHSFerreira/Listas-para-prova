#include <stdio.h>
#define QUANT 150

void main()
{
	int i, valor, menorvalor=1000, soma50=0, valores=0, soma=0;
	for(i=1;i<=QUANT;i++)
	{
		printf("Entre com um valor: ");
		scanf("%d", &valor);
		
		
		if(i<=50)
		{
			soma = soma + valor;
		}
		
		if(51<=i && i<=100)
		{
			if(valor<menorvalor)
			{
				menorvalor = valor;
			}
		}
		if(i>=50)
		{
			soma50 = soma50 + valor;
			valores++;
		}
		
	}
	
		printf("Soma dos primeiros 5 valores: %d\n", soma);
		printf("Menor valor entre a 5 e a 10 posicao: %d", menorvalor);
	
	
}
