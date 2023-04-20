#include <stdio.h>
#include <math.h>

int main() {
int j, i, s, p = 0;
for (i = 1; i-1 <= 7; i++)
{ for (s = 2, j = 1;j <= i; j++) s *= (i / j);
p += s;
}
printf("p=%d\n", p);

return 0;
};