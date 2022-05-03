#include <stdio.h>

void main()
{
	int base, expoente, i, potencia;
	
	printf("Entre com a base: ");
	scanf("%d", &base);
	
	printf("Entre com o expoente: ");
	scanf("%d", &expoente);
	
	for(i=1;i<=expoente;i++)
	{
		
		potencia = potencia * base;
		
	}
	
    printf("Valor da potencia: %d", potencia);
}
