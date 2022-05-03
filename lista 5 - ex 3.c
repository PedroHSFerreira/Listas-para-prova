#include <stdio.h>

void main()
{
	int N, i;
	printf("escolha um numero para mostrar seus divisores: ");
	scanf("%d", &N);

	for(i=1 ; i<=N ; i++)
	{
		if(N%i==0)
		{
			printf("%d ", i);
		}
	}
}
