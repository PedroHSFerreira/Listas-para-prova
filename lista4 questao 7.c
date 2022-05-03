#include <stdio.h>
void main()
{
	char genero, opiniao;
	
	int x = 3, Gostaram=0, NaoGostaram=0, Masculino = 0, Feminino=0, HomensGostaram=0, MulheresGostaram=0, i;
	float AceitacaoM, AceitacaoF;
	
	for(i=1; i<=x; i++)
	{
		
		printf("Entre com seu genero: ");
		fflush(stdin);
        scanf("%c", &genero);
	    
	    printf("Gostou do produto?");
	    fflush(stdin);
	    scanf("%c", &opiniao);
		
		
		
		if(opiniao=='S')
		{
			Gostaram++;
			
		}
		else
		{
			NaoGostaram++;
		}
		
		if(genero =='M')
		{
			Masculino++;
			
			if(opiniao=='S')
			{
				HomensGostaram++;
			}
		}
		else
		{
			Feminino++;
			if(opiniao=='S')
			{
				MulheresGostaram++;
			}
		}
		
	}
	
	AceitacaoM = (float)HomensGostaram/Masculino;
	AceitacaoF = (float)MulheresGostaram/Feminino;
	
	
	printf("Numero de pessoas que gostaram: %d\n", Gostaram);
	printf("Numero de pessoas que nao gostaram: %d\n", NaoGostaram);
	
	if(AceitacaoM>AceitacaoF)
	{
		printf("Aceitacao masculina foi maior.");
	}
	else
	{
		printf("Aceitacao Feminina foi maior.");
	}
	
	
	
	
	
	
}
