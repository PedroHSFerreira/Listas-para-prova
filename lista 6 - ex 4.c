#include <stdio.h>
#define QUANT 2
void main()
{
	float salario, SomaSalario=0, MediaSalario, maiorSalario = 0, cont=0, MediaFilhos, Media1000;
	int i, filhos, SomaFilhos=0, cont1000=0;
	
	for(i=1;i<=QUANT;i++)
	{
		printf("Digite seu salario: ");
		scanf("%f", &salario);
		
		printf("Digite o seu total de filhos: ");
		scanf("%d", &filhos);
		
		if (salario>0)
		{
			cont++;
			SomaSalario = SomaSalario + salario;
		}
		
		if(filhos>0)
		{
			SomaFilhos = SomaFilhos + filhos;
		}
		if(salario>maiorSalario)
		{
			maiorSalario = salario;
		}
		if(salario<=1000)
		{
			cont1000++;
		}
	}
	
	MediaSalario = (float)SomaSalario / cont;
	MediaFilhos = (float)SomaFilhos / QUANT;
	Media1000 = (float)cont1000 / QUANT;
	printf("Media dos Salarios: %.2f\n", MediaSalario);
	printf("Media o numero de filhos por familia: %.2f\n", MediaFilhos);
	printf("Percentual de pessoas com 1000 reais de salario: %f", Media1000);
	
	
	
	
	
	
	
	
	
}
