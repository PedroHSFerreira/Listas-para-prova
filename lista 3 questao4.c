#include <stdio.h>

void main()
{
	int valor, un, de, cen;
	
	printf("Entre com um valor: ");
	scanf("%d", &valor);
	
	if(valor<100 || valor>999)
	{
		printf("\nO valor inserido e invalido, ensira um valor entre 100 e 999.");
	}
	else
	{
		un  = valor%10;
		de  = ((valor%100)%100);
		cen = valor%1000;
	}
	
	printf ("unidade %d\n", un);
	printf ("dezena %d\n", de);
	printf ("centena %d", cen);
	
	
	
}
