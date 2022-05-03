#include <stdio.h>

void main()
{
	int num, i, j, f;
	
	printf("Escolha um numero para saber se ele é triangular");
	scanf("%d", &num);
	
	for(i=1, j = i+1, f = j+1 ; i<=9, j<=9,f<=9 ;i++, j++, f++)
	{
	   if(i*j*f==num)
	   {
	   	printf("%d X %d X %d = %d", i, j, f, num);
	   }
	}
	
}
