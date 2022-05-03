#include <stdio.h>

void main()
{
	int taxa10, Avista, prestacao5, prestacao20, valor, taxa20;
	
	printf("Entre com o valor do produto: ");
	scanf("%d", &valor);
	
	taxa10 = valor * 0.1;
	
	Avista = valor - taxa10;
	
	taxa20 = valor * 0.2;
	
	prestacao5 = valor / 5;
	
	prestacao20 = valor/10 + taxa20;
	
	printf("Valor a vista: %d\n", Avista);
	printf("Valor em 5 x: %d\n", prestacao5);
	printf("Prestacao em 10x: %d\n", prestacao20);
	
	
}
