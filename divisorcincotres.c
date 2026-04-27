#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    int div3 = (num % 3 == 0);
    int div5 = (num % 5 == 0);

    if (div3 != div5) {
        printf("O numero %d atende aos criterios.\n", num);
        
        (div3) ? printf("Divisivel apenas por 3.\n") : printf("Divisivel apenas por 5.\n");
    } 
    else if (div3 && div5) {
        printf("O numero %d e divisivel por ambos (3 e 5), portanto nao serve.\n", num);
    } 
    else {
        printf("O numero %d nao e divisivel nem por 3 nem por 5.\n", num);
    }

    return 0;
}