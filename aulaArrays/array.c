#include <stdio.h>

int main() {
    int i;
    int t = 15;
    int array[t];

    for (i = 0; i < t; i++)
    {
        array[i] = i;
    }


    for (i = 0; i < t; i++)
    {
        printf("%d: %d\n", i, array[i]);
    }

}