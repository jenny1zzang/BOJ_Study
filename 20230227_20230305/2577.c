#include <stdio.h>

int main() {
    int A, B, C;
    int result;
    int num[10]={0};

    scanf("%d %d %d",&A,&B,&C);

    result = A*B*C;

    while (result>0){
        num[result%10]++;
        result/=10;
    }

    for (int i=0;i<10;i++) printf("%d\n",num[i]);

    return 0;


}