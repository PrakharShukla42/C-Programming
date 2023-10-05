#include <stdio.h>

int main() {
    int C, N, D;
    scanf("%d", &C);
    scanf("%d", &N);
    scanf("%d", &D);

    int totalChocolates = C;

    for (int i = 0; i < N; i++) {
        totalChocolates += D;
    }

    printf("%d\n", totalChocolates);
    return 0;
}
