#include <stdio.h>
#include <string.h>

int main() {
    int N, count, total, i;
    char str[81], *p;
    scanf("%d",&N);

    for (i=0;i<N;i++){
        scanf("%s",str);
        p = str;
        count = 0;
        total = 0;
        for (;p<str+strlen(str);p++){
            if (*p == 'O') count++;
            else count = 0;
            total+=count;
        }
        printf("%d\n",total);
    }
}