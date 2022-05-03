#include<stdio.h>

void main()
{
	int n1, n2, n1a, n1b, n2a, n2b;
	
	printf("Entre com n1: ");
	scanf("%d", &n1);
	
	
	printf("Entre com n2: ");
	scanf("%d", &n2);
	
	
	
	 n1a = n1/10;
	 n1b = n1%10;
	 
	 n2a = n2/10;
	 n2b = n2%10;
	 
	 if (n2b *10 + n2a ==  n1)
	 {
	 	printf("e o mesmo numero com os algrismos embaralhados");
	 }
	 else
	 {
	 	printf("Nao e o mesmo numero");
	 }
		
}
