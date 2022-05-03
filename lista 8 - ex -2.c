#include<stdio.h>

void main()
{
	int a, b, c, i;
	
	
	 printf("entre com a: ");
	 scanf("%d", &a);
	 
	 printf("Entre com b: ");
	 scanf("%d", &b);
	 
	 printf("Entre com c: ");
	 scanf("%d", &c);
	 
	 
	 for(i=a;i<=b;i++)
	 {
	 	
	 	if(i%c!=0)
	 	{
	 		printf("%d ", i);
	 		
		 }
	 	
	 	
	 }
	 
	 
	 
}
