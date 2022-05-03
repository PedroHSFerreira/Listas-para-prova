#include <stdio.h>

void main()
{
	int codigo, num;
	float preco;
	
	
	printf("cachorro quente  100   3.50\n");
	printf("bauru            101   4.50\n");
	
	printf("Escolha seu pedido: ");
	scanf("%d", &codigo);
	
	printf("Escolha quantos vc quer: ");
	scanf("%d", &num);
	
	switch(codigo)
	{
		case 100:
		preco = 3.50 * num;
		break;
		
		case 101:
		preco = 4.50 * num;
		break;
		
		default:
		printf("O codigo digitado nao pertence ao nosso cardapio.");
		
	}
	printf("preco a se pagar: %f", preco);
	
}
