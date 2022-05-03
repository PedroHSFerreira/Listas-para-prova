#include <stdio.h>
#define QUANT 50
void main()
{
	int i, mulheres=0, Homem=0;
	char genero;
	float altura, MaiorAltura=-2, MenorAltura=100, MediaAlturaM, AlturaM, MediaAlturaPo, quant=0, somaAlturas=0, percHomem;
	
	
	for(i=1;i<=QUANT;i++)
	{
		
		printf("Digite seu genero: ");
		fflush(stdin);
		scanf("%c", &genero);
	
		
		printf("Digite sua altura: ");
		scanf("%f", &altura);
		
		if(altura>MaiorAltura)
		{
			MaiorAltura = altura;
		}
		if (altura<MenorAltura)
		{
			MenorAltura = altura;
		}
		if(genero=='M')
		{
			mulheres++;
			AlturaM = AlturaM + altura;
		}
		else
		{
			if(genero=='H')
			{
				Homem++;
			}
			
			
		}
		
		if(altura>0)
		{
			quant++;
			somaAlturas = somaAlturas + altura;
		}
		
	}
	percHomem = (float)Homem / altura;
	MediaAlturaM = (float) AlturaM / mulheres;
	MediaAlturaPo = MediaAlturaPo = (float) somaAlturas / quant;
	
	printf("Maior Altura = %.2f\n", MaiorAltura);
	printf("Menor ALtura = %.2f\n", MenorAltura);
	printf("Media da altura das mulheres: %.2f\n", MediaAlturaM);
	printf("Media da altura da populacao: %.2f\n", MediaAlturaPo);
	printf("porcentagem de homens na populacao: %.2f", percHomem);
	
	
}
