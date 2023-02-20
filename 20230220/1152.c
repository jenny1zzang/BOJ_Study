#include <stdio.h>
#include <string.h>
int main() {
    char str[1000001], *p;
    int count = 0;
    scanf("%[^\n]s",str);
    
    for (p=str;p<=str+strlen(str);p++){
        if (*p == ' '&&*(p+1)=='\0') {
            if (p==str) break;
            else { 
                count++;
                break;
            }
        }
        else if (*p == ' '&&p==str) continue; 
        else if (*p=='\0') count++;
        else if (*p == ' ') count++;
    }

    printf("%d",count);

    return 0;
}