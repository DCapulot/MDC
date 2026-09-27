#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b) {
    if (b == 0) {
        return abs(a);
    }

    return mdc(b, a % b);
}

int main() {
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("O MDC de %d e %d e: %d\n", a, b, mdc(a, b));

    return 0;
}
