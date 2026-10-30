#include <stdio.h>


int main() {
    int v[10];

    for(int i = 0; i <= 10; i++) {
        printf("Coloque a posição %d: ", i);
        scanf("%d", &v[i]);
    }

    return 0;
}
