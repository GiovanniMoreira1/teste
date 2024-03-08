#include <stdio.h>

void initArray(int a[], int t) {
    int i;
    for (i = 0; i < t; i++)
    {
        a[i] = 0;
    }

}

void printArray(int t, int a[t]) {
    int i;
    for (i = 0; i < t; i++) {
        printf("%d", a[i]);
    printf("\n");
    }
}

int main() {
    int t = 10;
    int array[t];
    initArray(array, t);
    array[5] = 10; 
    printArray(t, array);
}