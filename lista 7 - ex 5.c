#include <stdio.h>

void main()
{
	int idade, cont50=0, contalturas=0, i;
	float peso, altura, somaAltura=0, maiorPeso=0, media;
	char opc;
	
	i=0;
	do
	{
	
	    printf("Digite seu peso: ");
	    scanf("%f", &peso);
	
	    printf("Digite sua idade: ");
	    scanf("%d", &idade);
	
	    printf("Digite sua altura: ");
	    scanf("%f", &altura);
	   i++;
	    
	
	if(idade>50)
	{
		cont50++;
	}
	
	if(peso>80)
	{
		somaAltura = somaAltura + altura;
		contalturas++;
	}
	
	if(altura>1.65 && idade < 30)
	{
		if(peso>maiorPeso)
		{
			maiorPeso = peso;
		}
	}
	
	
	printf("Deseja continuar a inserir?");
	fflush(stdin);
	scanf("%c", &opc);
	
	}
	while(opc!='N');
	
	media = (float)somaAltura / contalturas;
	
	printf("Pessoas com mais de 50 anos: %d\n", cont50);
	printf("Media de altura de pessoas com mais de 80kg: %f\n", media);
	printf("Maior peso dentre as pessoas acima de 1.65 de altura e com idade inferior a 30: %f", maiorPeso);
	
	
	
	
	
	
	
	
	
	
}
