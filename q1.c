#include <stdio.h>


int main() {
    int v[5], media = 0;

    for(int i = 0; i < 5; i++) {
        printf("coloque o número do indice [%d]: ", i);
        scanf("%d", &v[i]);
        media += v[i];
    }

    int maior = v[0];

    for(int i = 0; i < 5; i++) {
        if(v[i] > maior)
            maior = v[i];
    }

    printf("A media seria igual a: %.2f\n", media/5.0);
    printf("O maior valor seria: %d\n", maior);

    return 0;
}
