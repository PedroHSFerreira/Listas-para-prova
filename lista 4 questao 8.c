#include <stdio.h>

#define QUANT 2
void main()
{
	
    int matricula, genero, idade, salario, tempo, quantidade=0, quantF=0, salarioH=0, i, Homem;
    float Media;
    
    
    for(i=1;i<=QUANT;i++)
    {
	
     printf("Entre com sua matrícula: ");
     scanf("%d", &matricula);
     
     printf("Digite seu genero: ");
     fflush(stdin);
     scanf("%c", &genero);
     
     printf("Digite sua idade: ");
     scanf("%d", &idade);
     
     printf("Digite seu salario: ");
     scanf("%d", &salario);
     
     printf("Digite seu tempo de trabalho: ");
     scanf("%d", &tempo);
     
     
     
        if(idade<21)
        {
     	    quantidade++;
	    }
	    
	    if(genero=='F')
	    {
	    	quantF++;
		}
		else
		{
		
		   if(genero=='H')
		   {
		      	Homem++;
			
			   if(salario>0)
			   {
				salarioH = salarioH + salario;
		       }
	    	}
		}
	    
     }
     
     Media = (float)salarioH / Homem;
     
     
     printf("Pessoas com menos de 21 anos: %d \n", quantidade);
     printf("Quantidade de mulheres: %d\n", quantF);
     printf("Media salarial dos homens: %.2f", Media);
     
}
