#include <stdio.h>
#define QUANT 5
void main()
{
	int num, i, SomaPares=0, Pares = 0, maiornumero;
	float MediaPares;
	
    for(i=1;i<=QUANT;i++)	
    {
    	
    	printf("Entre com um numero inteiro: ");
    	scanf("%d", &num);
    	
    	if(i%2==0)
    	{
    		if(num>maiornumero)
    		{
    			maiornumero = num;
			}
		}
		
		if(num%2==0)
		{
			SomaPares = SomaPares + num;
			Pares++;
		}
	}
	MediaPares =(float) SomaPares / Pares;
	
	printf("O maior numero em ordem par : %d\n", maiornumero);
	printf("Media dos numeros pares: %f", MediaPares);
	
	
	
	
	
	
	
}
