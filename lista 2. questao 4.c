#include <stdio.h>
void main()
{
	float percuso, Km1, CalculoCombustivel, Custo, preco;
	
	
	
	printf("Digite o valor do percuso em km: ");
	scanf("%f", &percuso);
	
	printf("Digite o numero de quilometros que o carro percorre com 1 litro: ");
	scanf("%f", &Km1);
	
	printf("Qual o preço do Litro de combustível? ");
	scanf("%f", &preco);
	
	
	CalculoCombustivel = percuso / Km1;
	
	Custo = CalculoCombustivel * preco;
	
	printf("Quantidade consumida de combustivel: %.1f\n", CalculoCombustivel);
	printf("Custo total: %.1f", Custo);
	
	
	
	
	
}
