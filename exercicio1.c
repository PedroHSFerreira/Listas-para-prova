 #include <stdio.h>
 void main()
 {
 	int a, b, c, i;
 	
 	
 	printf("Entre com a: ");
 	scanf("%d", &a);
 	
 	printf("Entre com b: ");
 	scanf("%d", &b);
 	
 	printf("Entre com c: ");
 	scanf("%d", &c);
 	
 	
 	if(a<b)
 	{
 		for(i=a;i<=b;i++)
 		{
 			if(i%c!=0)
 			{
 				printf("%d ", i);
 				
			 }
		 }
 		
	 }
	 else
	 {
	 	for(i=a;i>=b;i--)
	 	{
	 		if(i%c!=0)
	 		{
	 			printf("%d ", i);
			 }
		 }
	 }
 	
 }
