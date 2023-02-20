#include <stdio.h>

int main() {
    int N, i;
    char number;
    int total=0;
    scanf("%d",&N);
    getchar();
    for (i=0;i<N;i++){
        scanf("%c",&number);

        total += number - '0';
    }

    
    printf("%d",total);

    return 0;
}