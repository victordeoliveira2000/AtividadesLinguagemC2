#include <stdio.h>

int main() {
    int ninformado; // Declarar a vari�vel para armazenar o n�mero informado

    printf("Digite um n�mero: ");
    scanf("%d", &ninformado); // Corrigir a leitura do n�mero informado

    // Verificar se o n�mero � divis�vel por 5 ou por 0 (o que n�o faz sentido)
    if (ninformado % 5 == 0) { // Corrigir a condi��o e adicionar chaves
        printf("O n�mero %d � divis�vel por 5.\n", ninformado); // Corrigir a formata��o da sa�da
    } else {
        printf("O n�mero %d n�o � divis�vel por 5.\n", ninformado); // Adicionar mensagem para caso n�o seja divis�vel
    } else{
    	prinf("Nao e divisivel");
	}

    return 0; // Indicar que o programa foi executado com sucesso
}

