#include <stdio.h>

void main()
{
	int a1=0, r=0, i=0, N=0, termo;
	
	printf("Entre com o total de numeros q quer exibir: ");
	scanf("%d", &N);
	
	printf("Entre com a1: ");
	scanf("%d", &a1);
	
	printf("Entre com a razão: ");
	scanf("%d", &r);
	
	termo = a1;
	
	
	for(i= 1; i<=N; i++)
	{
		
		printf("%d ", termo);
		
		termo = termo + r;
		
		
	}
	
}
