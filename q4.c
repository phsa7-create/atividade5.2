#include <stdio.h>


int main() {
    int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for(int i = 0; i < 3; i++) {
        int somar = 0;
        for(int j = 0; j < 3; j++) {
            somar += m[i][j];
        }
        printf("Linha %d: %d\n", i, somar);
    }

    return 0;
}
