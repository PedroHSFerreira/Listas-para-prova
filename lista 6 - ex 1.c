#include <stdio.h>
#define QUANT 3

void main()
{
	int x, i, cont, num;
	
	printf("Entre com um valor inteiro");
	scanf("%d", &x);
	
	for(i=1;i<=QUANT;i++)
	{
	    printf("Entre com numeros: ");
	    scanf("%d", &num);
	    
	    if(num%x==0)
	    {
	    	cont++;
		}
	}
	
	printf("Total de multiplos de x: %d", cont-1);
	
	
	
	
	
	
	
}
