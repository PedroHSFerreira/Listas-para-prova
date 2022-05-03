#include <stdio.h>

void main()
{
	
    int num, peso, conta, multiplicacao=0, denominador=0;
    float media;
    
    
	do 
	{
		conta = 0;
		
		printf("Escolha um numero: ");
		scanf("%d", &num);
		
		if(num>0)
		{
			
		printf("Escolha seu peso: ");
		scanf("%d", &peso);
		
	
			
			conta = num * peso;
			
			multiplicacao = multiplicacao + conta;
			
			denominador = denominador + peso;
			
		}
		
	}
	while(num>0);
	
	media = (float)multiplicacao / denominador;
	
	printf("Media ponderada dos determinados numeros escolhidos: %f", media);
	
}
