	#include <stdio.h>
	int main()
	{
		int n1;
		int n2;
		printf("Digite um numero");
		scanf("%d",&n1);
		printf("Digite outro");
		scanf("%d",&n2);
		if(n1>n2) {
			printf("Numero maior e %d e o menor %d",n1,n2);
			
		}
		else if (n2>n1) {
			printf("Numero maior e %d e o menor %d",n2,n1);
		}
		
	}
