#include <stdio.h>
    int main() {
        int N;
        scanf("%d", &N);
        int count = 0;
        for(int i = 0; i < N; i++) {
            int x;
            scanf("%d", &x);
            if(x == 1) count++;
        }
        printf("%d", count);
        return 0;
    }
