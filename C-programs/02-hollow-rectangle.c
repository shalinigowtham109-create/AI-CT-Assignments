#include <stdio.h>
int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(i == 0 || i == N-1 || j == 0 || j == M-1)
                printf("*");
            else
                printf(" ");
        }
        if(i != N-1) printf("\n");
    }
    return 0;
}
