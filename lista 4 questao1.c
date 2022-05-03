#include <stdio.h>

void main()
{
	
	int N, Y, i;
	
	
	printf("Entre com o valor de N:\n-");
	scanf("%d", &N);
	
	printf("\nEntre com o valor de Y:\n- ");
	scanf("%d", &Y);
	
	printf("Multiplos : ");
	for(i=0; i<N; i++)
	{
		if(i%Y==0)
		{ 
			printf("%d ", i);
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
}
