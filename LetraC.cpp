#include <stdio.h>

int main() {
    int ndigitado;
    int ndigitado2;

    printf("Digite um numero: ");
    	scanf("%d", &ndigitado);

    printf("Digite outro numero: ");
    	scanf("%d", &ndigitado2);

    if (ndigitado > ndigitado2) {
        printf("O maior numero e %d e o menor e %d\n", ndigitado, ndigitado2);
    } 
	
	else if
	
	
	 (ndigitado2 > ndigitado) {
        printf("O maior numero e %d e o menor e %d\n", ndigitado2, ndigitado);
    }
	
	 else {
        printf("Os numeros sao iguais: %d\n", ndigitado);
    }

    return 0;
}

