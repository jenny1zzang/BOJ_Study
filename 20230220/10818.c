#include <stdio.h>

int main() {
    int N, n, i;
    int max, min;
    scanf("%d",&N);

    
    for (i=0;i<N;i++){
        scanf("%d",&n);
        if (i==0) {
            max = n;
            min = n;
        }

        else {
            if (max<n) max = n;
            else if (min > n) min = n;
        }
    }
    printf("%d %d",min, max);
}