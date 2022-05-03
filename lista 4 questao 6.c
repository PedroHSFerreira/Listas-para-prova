#include <stdio.h>

void main()
{
	int N, un=0, dez=0, i;
	
	printf("Entre com um valor: ");
	scanf("%d", &N);
	
	if(N>18)
	{
		printf("Numero invalido.");
	}
	else
	{
	
	   for(i=1;i<=99;i++)
	    {
	    	un = i%10;
	    	dez = i/10;
	    	
	    	if(un+dez==N)
	    	{
	    		printf("%d%d ", dez, un);
			}
	    	
		}
	    
	    
	}    

	
	
	

	
	
	
	
	
	
	
	
	
	
	
}
