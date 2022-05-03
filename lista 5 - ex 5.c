#include <stdio.h>
void main()
{


   int i, N, termo;
   
   printf("Digite o valor de N: ");
   scanf("%d", &N);
    
    
    termo = 1;

    for(i=1; i<=N; i++)
      {
      	printf("%d ", termo);
      	
      	termo = termo *2;
      	
	  }
	  
  }  
