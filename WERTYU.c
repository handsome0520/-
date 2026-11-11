#include <stdio.h>
#include <string.h>
int main(){
    char str[] = "`1234567890-="
                  "QWERTYUIOP[]\\"
                  "ASDFGHJKL;'"
                  "ZXCVBNM,./";

    char c;
    while((c = getchar())!=EOF){
        char *p = strchr(str,c);
        printf("%c",p ? *(p-1):c);
    }
}