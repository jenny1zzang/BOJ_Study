#include <stdio.h>

int main() {
    int n[10], num[42]={0}, i, count=0;
    for (i=0;i<10;i++){
        scanf("%d",&n[i]);
    }

    for (i=0;i<10;i++){
        num[n[i]%42]++;
    }

    for (i=0;i<42;i++){
        if (num[i]>0) count++;
    }

    printf("%d",count);
}