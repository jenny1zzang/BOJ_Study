#include <stdio.h>

int main() {
    int N;
    int score[1000], max = 0;
    float avg=0;

    scanf("%d",&N);

    for (int i=0;i<N;i++){
        scanf("%d",&score[i]);

        if (max < score[i]) max = score[i];
    }

    for (int i=0;i<N;i++){
        avg += (float)score[i] / max * 100;
    }

    printf("%f",avg/N);

    return 0;
}