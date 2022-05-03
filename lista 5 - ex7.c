#include <stdio.h>
void main()
{
	
	int N, somaP=0, Produto;
	
	
	do
	{
		
		printf("Digite um numero, e caso queira para de inserir digite um numero negativo.");
		scanf("%d", &N);
		
		if(N>0)
		{
		
		     if(N%2==0)
		     {
			    somaP = somaP + N;
		     }
		    else
		   {
			    if(N%2!=0)
			    {
				   Produto = Produto * N;
		     	}
	     	}
		}
		
		
	}
	while (N>0);
	
	printf("Soma dos numeros pares: %d\n", somaP);
	
	printf("Produto dos numeros impares: %d", Produto);
	
}
