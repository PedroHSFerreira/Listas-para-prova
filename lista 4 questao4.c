#include <stdio.h>
#define QUANT 5
void main()
{
	int i, valor, SomaP=0, negativos;
    float Media;
	
	for(i=1;i<=QUANT;i++)
	{
		printf("Digite um valor:");
		scanf("%d", &valor);
		
		if(valor>0)
		{
			SomaP = SomaP + valor;
		}
		else
		{
			negativos++;
			
		}
		
	}
	
	Media = (float)SomaP/QUANT;
	
	printf("Media dos positivos: %.2f\n", Media);
	printf("Quantidade de numeros negativos: %d", negativos);
	

}
