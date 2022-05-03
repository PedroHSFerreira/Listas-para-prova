#include <stdio.h>

void main()
{
	int a, b, c, i, menor=0, meio=0, maior=0;
	
	
	
	
	printf("Digite 1 para a ordem ser crescente, 2 decrescente e 3 o maior valor ficar no meio.");
	scanf("%d", &i);
	
	printf("A = ");
	scanf("%d", &a);
	
	printf("B = ");
	scanf("%d", &b);
	
	printf("C = ");
	scanf("%d", &c);
	
	if (i==1)
	{
		if (a>b && a>c)
		{
			 maior = a;
			
			if(b>c)
			{
				meio = b;
				menor = c;
			}
			else
			{
				 meio = c;
				 menor = b;
			}
		}
		else
		{
			if (b>a && b>c)
			{
				maior = b;
				
				if(a>c)
				{
					meio = a;
					menor = c;
				}
				else
				{
					meio = c;
				    menor = a;
					
				}
			}
			
			else
			{
				if(c>a && c>b)
				{
					  maior = c;
					
					
					if(a>b)
					{
						 meio = a;
						 menor = b;
						}
						else
						{
							 menor = a;
							 meio = b;
						}
					
				}
			}
			
			
		}
		
		printf(" menor = %d, meio = %d , maior = %d", menor, meio, maior);
	}
	
	
	
	
}
