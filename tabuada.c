#include <stdio.h>
int main()
{
	int multiplicando=1, multiplicador, produto;
	
	
	for (multiplicando=1;multiplicando<=9;multiplicando++)
	{
		for(multiplicador = 1; multiplicador<=9;multiplicador++)
		{
			produto = multiplicando * multiplicador;
			
			printf("%d x %d = %d\n", multiplicador , multiplicando, produto );
		}
		
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
