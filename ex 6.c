#include <stdio.h>

void main()
{
int i, num, variacao = 2, a1, termo;

printf("Entre com o numero de termos:\n");
scanf ("%d", &num);

termo = 1;


for (i = 1; i <= num; i++)
{
printf ("%d ", termo);
termo = termo * variacao;
variacao = variacao*2;
}

}
