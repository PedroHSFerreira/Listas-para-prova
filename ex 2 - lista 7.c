#include <stdio.h>

void main()
{
	
	float m, conta, cr, c, cra, cont=0, dupla;
	int i;
	
	
	printf("Insira a producao: ");
	scanf("%f", &m);
	
	printf("insira o crescimento anual: ");
	scanf("%f", &c);
	
	cr = c/100;
	
	cra = cr + 1.00;
	
	conta = m;
	dupla = 2 * m;
	
	for(i=conta;i<=dupla;i= i * cra)
	{
		
		
		printf("%d ", i);
		
			cont++;
		
		
	}
	
	printf("\nprecisa de %.2f anos para a producao multiplicar.", cont);
	
	
	
	
}
