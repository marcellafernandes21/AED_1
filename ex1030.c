#include <stdio.h>
int josephus(int n, int k){
    if (n == 1){
        return 1;
    } else {
        return (josephus(n - 1, k) + k - 1) % n + 1;
    }
}
int main() {
    int NC, n, k, caso = 1;
    
    scanf("%d", &NC);
    
    while (NC--){
        scanf("%d %d", &n, &k);
        int sobrevivente = josephus(n, k);
        printf("Case %d: %d\n", caso++, sobrevivente);
    }
    return 0;
}