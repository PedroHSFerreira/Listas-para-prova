#include <stdio.h>

void main()
{
	
	int N, i, soma;
	
	printf("Entre com um numero: ");
	scanf("%d", &N);
	
	for(i=1;i<=N;i++)
	{
		
		soma = soma + i;
		
	}
	
	printf("Soma dos numeros ate %d : %d", N, soma-1);
}
