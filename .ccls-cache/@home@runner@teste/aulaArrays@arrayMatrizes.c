#include <stdio.h>

int main() {
    int m[5][5];
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            m[i][j] = i * j;
        }
    }

     for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) 
            printf("%d", m[i][j]);
        printf("\n");
    }

}