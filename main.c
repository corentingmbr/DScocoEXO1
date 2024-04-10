#include <stdio.h>



int main() {
    int i;
    int array[10] = {4, 5, 36, 89, 67, 325, 897, 8, 74, 42};
    int sum = 0;

    for (i = 0; i < 10; i++) {
        sum += array[i];
    }

    printf("Somme tableau: %d\n", sum);
    int x = 4+5+36+89+67+325+897+8+74+42;
    printf("Somme pour corriger : %d\n", x);

    return 0;
}