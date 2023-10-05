#include <stdio.h>
int main() {
    int C,N,D;
    printf("Sample Input");
    scanf("%d", &C);
    scanf("%d", &N);
    scanf("%d", &D);
    int chocolates=C;
    for (int i=0;i<N;i++) {
        chocolates += D;
    }
    printf("Smaple Output\n");
    printf("%d\n", chocolates);
    return 0;
}
