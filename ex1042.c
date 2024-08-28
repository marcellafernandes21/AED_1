#include <stdio.h>
void troca(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a, b, c;
    int x, y, z;
    
    scanf("%d %d %d", &a, &b, &c);
    
    x = a;
    y = b;
    z = c;
    if (x > y) troca(&x, &y);
    if (x > z) troca(&x, &z);
    if (y > z) troca(&y, &z);
    
    printf("%d\n%d\n%d\n\n", x, y, z);
    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}