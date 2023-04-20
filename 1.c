#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    float a, exp_x;

    printf("Введіть значення x та y: ");
    scanf("%d %d", &x, &y);

    exp_x = exp(-x);
    a = (1 + y) * x + y / (pow(x, 2) + 4) / (exp_x - 2 + 1) / (pow(x, 2) + 4);

    printf("Значення виразу a: %.2lf", a);

    return 0;
};