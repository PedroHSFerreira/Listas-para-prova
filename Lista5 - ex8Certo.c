#include <stdio.h>
 void main ()
 {
 	
 	int carteira, NumMultas, ValorMultas=0, Valor, i, ValorTotal=0, MaiorMulta=0, MaiorCarteira;
 	
 	do
 	{
 		printf("Digite o numero da sua carteira, e caso queira parar a insercao digite um numero negativo.");
 		scanf("%d", &carteira);
 		if(carteira>0)
 		{
 			
		 
 		printf("Numero de multas: ");
 		scanf("%d", &NumMultas);
 		
 		ValorMultas = 0;
 		
 		for(i=1;i<=NumMultas;i++)
 		{
 			printf("De o valor da multa:");
 			scanf("%d", &Valor);
 			
 			ValorMultas = ValorMultas + Valor;
		}
		 
		 ValorTotal = ValorTotal +  ValorMultas;
		 
		 printf("Valor da multa: %d\n", ValorMultas);
		 
		 if(ValorMultas>MaiorMulta)
		 {
		 	MaiorMulta = ValorMultas;
		 	MaiorCarteira = carteira;
		 }
	  }
	}
	while (carteira>0);
	
 	 printf("Divida total: %d\n", ValorTotal);
 	 printf("Carteira com Maior multa: %d\n", MaiorCarteira);
 	 printf("Valor da maior Multa: %d", MaiorMulta);
 	
 }
