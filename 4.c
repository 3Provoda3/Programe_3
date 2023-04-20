#include <stdio.h>
#include <math.h>

int main() {
 float a = -M_PI/2;
 float b = M_PI/2;
 float dx = M_PI/30;
 float x, y;
    printf(" x\t| f(x)\n");
    printf("--------------\n");

    for(x=a; x<=b; x+=dx) {
        if(x == 0) {
            printf("%.2f\t| Невизначено\n", x);
        } else if(x < 0) {
            printf("%.2f\t| Невизначено\n", x);
        } else {
            y = sin(x) / x;
            printf("%.2f\t|%.4f\n", x, y);
        }
    }
    return 0;
}
