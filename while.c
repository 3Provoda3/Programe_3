#include <stdio.h>
#include <math.h>

int main() {
    int i = 21;
    int sum = 0;
    while (i <= 30) {
        sum += i * i;
        i += 2;
    }
    printf("Сума квадратів непарних чисел в діапазоні від 20 до 30: %d", sum);
    return 0;
}
