#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2;
    
    printf("Digite o primeiro n�mero: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo n�mero: ");
    scanf("%f", &num2);
    
    if (num1 < num2) {
        float cubo = num1 * num1 * num1;
        printf("O cubo do menor n�mero (%.2f) � %.2f\n", num1, cubo);
        
        if (num2 >= 0) {
            float raiz_quadrada = sqrt(num2);
            printf("A raiz quadrada do maior n�mero (%.2f) � %.2f\n", num2, raiz_quadrada);
        } else {
            printf("N�o � poss�vel calcular a raiz quadrada do segundo n�mero, pois ele � negativo.\n");
        }
    } else if (num1 > num2) {
        float cubo = num2 * num2 * num2;
        printf("O cubo do menor n�mero (%.2f) � %.2f\n", num2, cubo);
        
        if (num1 >= 0) {
            float raiz_quadrada = sqrt(num1);
            printf("A raiz quadrada do maior n�mero (%.2f) � %.2f\n", num1, raiz_quadrada);
        } else {
            printf("N�o � poss�vel calcular a raiz quadrada do primeiro n�mero, pois ele � negativo.\n");
        }
    } else {
        printf("Os n�meros s�o iguais, portanto n�o � poss�vel calcular o cubo do menor e a raiz quadrada do maior.\n");
    }
    
    return 0;
}

