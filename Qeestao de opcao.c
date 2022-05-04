#include <stdio.h>
int main()
{
	
	int idade, idadesmaior18, alturas = 0, i;
	float peso, altura,  maioraltura=0, somaaltura = 0, MediaAltura;
	
	
	
	
	printf("Entre com sua idade: ");
	scanf("%d", &idade);
	for(i=1;idade>-1;)
	{
		printf("Entre com seu peso: ");
		scanf("%f", &peso);
		
		printf("Entre com sua altura: ");
		scanf("%f", &altura);
		i++;
		
		if (idade>=18)
		{
			idadesmaior18++;
		}
		else
		{
			if (idade>65)
			{
				alturas++;
				somaaltura = somaaltura + altura;
			
			}
			if(peso>=80)
			{
				if(altura>maioraltura)
				{
					maioraltura=altura;
				}
			}
			
		}
		 printf("Entre com sua idade");
		 scanf("%d", &idade);
	   
	}
	
	MediaAltura = ((float)somaaltura / alturas);
	
     printf("Total de pessoas que forneceram os seus dasos: %d", i);
     printf("Numero de pessoas com 18 anos ou mais: %d", idadesmaior18);
     printf("Media das alturas: %f", MediaAltura);
     printf("Maior Altura: %f", maioraltura);
	
	
	
}
