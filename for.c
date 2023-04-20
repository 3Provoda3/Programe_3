#include <stdio.h>
#include<math.h>

int main() {
    int sum = 0;
    for (int i = 21; i <= 30; i += 2) {
        sum += i * i;
    }
    printf("Сума квадратів непарних чисел в діапазоні від 20 до 30: %d", sum);
    return 0;
}
