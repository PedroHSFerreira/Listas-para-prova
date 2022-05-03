#include <stdio.h>

void main()
{
    int i, tempo, meses;
    float q, fixo, total, rendimento;

    printf ("Entre com o valor investido:\n");
    scanf ("%f", &q);

    printf ("Digite o tempo de investimento:\n");
    scanf ("%d", &tempo);
    
    printf ("Entre com o rendimento:\n");
    scanf ("%f", &fixo);
    
    fixo = fixo / 100;
    total = q;
    meses = tempo * 12;
    
    for (i = 1; i <= meses; i++)
    {
        total = total + (total * fixo); 
    }
    printf ("Seu valor de investimento depois de %d anos sera de %.2f\n", tempo, total);
    
}
