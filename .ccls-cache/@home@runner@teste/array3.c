#include <stdio.h>

int soma(int a[], int t) {
    int resultado = 0;
    for (int i = 0; i < t; i++)
    {
        resultado += a[i];
    }
    return resultado;
}

int main() {
    int t = 10;
    int arr[t];

    int i;
    for (i = 0; i < t; i++) {
        arr[i] = i*i;
    }

    int total = soma(arr, t);
    printf("Soma: %d\n", total);

}