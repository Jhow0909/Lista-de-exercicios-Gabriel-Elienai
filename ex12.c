#include <stdio.h>

int main(void) {
    int primeiro, segundo;
    printf("Primeiro numero: ");
    scanf("%d", &primeiro);
    printf("Segundo numero: ");
    scanf("%d", &segundo);

    if (primeiro > segundo) {
        printf("Maior: %d", primeiro);
    } else if (segundo > primeiro) {
        printf("Maior: %d", segundo);
    } else {
        printf("Os numeros sao iguais.\n");
    }
    return 0;
}
