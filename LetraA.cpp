#include <stdio.h>

int main() {
    int ninformado; // Declarar a variável para armazenar o número informado

    printf("Digite um número: ");
    scanf("%d", &ninformado); // Corrigir a leitura do número informado

    // Verificar se o número é divisível por 5 ou por 0 (o que não faz sentido)
    if (ninformado % 5 == 0) { // Corrigir a condição e adicionar chaves
        printf("O número %d é divisível por 5.\n", ninformado); // Corrigir a formatação da saída
    } else {
        printf("O número %d não é divisível por 5.\n", ninformado); // Adicionar mensagem para caso não seja divisível
    } else{
    	prinf("Nao e divisivel");
	}

    return 0; // Indicar que o programa foi executado com sucesso
}

