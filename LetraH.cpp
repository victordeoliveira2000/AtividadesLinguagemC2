#include <stdio.h>
#include <math.h>

int main() {
    double numero1, numero2;

    printf("Digite o primeiro número: ");
    scanf("%lf", &numero1);

    printf("Digite o segundo número: ");
    scanf("%lf", &numero2);

    double cuboMenor = (numero1 < numero2) ? pow(numero1, 3) : pow(numero2, 3);
    double raizMaior = (numero1 > numero2) ? sqrt(numero1) : sqrt(numero2);

    if (numero1 == numero2) {
        printf("Os números são iguais. Não é possível calcular cubo do menor e raiz quadrada do maior.\n");
    } else {
        printf("Cubo do menor número: %.2f\n", cuboMenor);
        printf("Raiz quadrada do maior número: %.2f\n", raizMaior);
    }

    return 0;
}

