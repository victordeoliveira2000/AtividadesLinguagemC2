#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2;
    
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    
    if (num1 < num2) {
        float cubo = num1 * num1 * num1;
        printf("O cubo do menor número (%.2f) é %.2f\n", num1, cubo);
        
        if (num2 >= 0) {
            float raiz_quadrada = sqrt(num2);
            printf("A raiz quadrada do maior número (%.2f) é %.2f\n", num2, raiz_quadrada);
        } else {
            printf("Não é possível calcular a raiz quadrada do segundo número, pois ele é negativo.\n");
        }
    } else if (num1 > num2) {
        float cubo = num2 * num2 * num2;
        printf("O cubo do menor número (%.2f) é %.2f\n", num2, cubo);
        
        if (num1 >= 0) {
            float raiz_quadrada = sqrt(num1);
            printf("A raiz quadrada do maior número (%.2f) é %.2f\n", num1, raiz_quadrada);
        } else {
            printf("Não é possível calcular a raiz quadrada do primeiro número, pois ele é negativo.\n");
        }
    } else {
        printf("Os números são iguais, portanto não é possível calcular o cubo do menor e a raiz quadrada do maior.\n");
    }
    
    return 0;
}

