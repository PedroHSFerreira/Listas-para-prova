#include <stdio.h>

void main()
{
	
	int m, c, i;
	float cr;
	
	
	printf("Entre com sua producao anual: ");
	scanf("%d", &m);
	
	printf("Entre com seu crescimento anual: ");
	scanf("%f", &c);
	
	cr = (c/100);
	printf("cr = %f\n", cr);
	
	for(i=m;i<=2*m;i++)
	{
	    
	    m = m * i;
	    
	    printf("%d ", m);
	    
	}
	
	
}
