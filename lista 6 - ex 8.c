#include <stdio.h>
#define QUANT 100
void main()
{
	int x, y, num, cont=0, i, valor;
	
	printf("Entre com x: ");
	scanf("%d", &x);
	
	printf("Entre com y: ");
	scanf("%d", &y);
	
	 for(i=0;i<=QUANT;i++)
	 {
	 	printf("Entre com um valor: ");
	 	scanf("%d", &valor);
	 	
	 	if( (x-y <= valor) && (valor<=x+y))
	 	{
	 		cont++;
		 }
	 	
	 	
	 }
	 printf("total de numeros no intervalo (x -y), (x+y)= %d", cont);
}
