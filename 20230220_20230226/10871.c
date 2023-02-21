#include <stdio.h>

int main() {
    int N, X, A;
    int i, count=0;
    scanf("%d %d",&N,&X);

    for (i=0;i<N;i++){
        scanf("%d",&A);
        if (A < X) printf("%d ",A);
    }


    return 0;
}