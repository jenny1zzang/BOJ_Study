#include <stdio.h>

int main() {
    int N;
    int i;
    float score[1000], max = 0;
    float sum=0;
    scanf("%d",&N);

    for (i=0;i<N;i++){
        scanf("%lf",&score[i]);
        if (max < score[i]) max = score[i];
    }

    printf("%lf\n",score);
    for (i=0;i<N;i++){
        if (max != score[i]){
            score[i] = score[i]/max * 100; 
        }
        sum+=score[i];
    }
    printf("%lf",sum);
    printf("%lf",sum/N);
}