#include <stdio.h>
#include <string.h>

int main(){
    int testcase;
    scanf("%d",&testcase);
    char fingering[14][12]={"c0111001111","d0111001110",
                            "e0111001100","f0111001000",
                            "g0111000000","a0110000000",
                            "b0100000000","C0010000000",
                            "D1111001110","E1111001100",
                            "F1111001000","G1111000000",
                            "A1110000000","B1100000000"};
    while(testcase--){
        char str[1005]={0};
        char current[12]= "00000000000";
        char count[10]={0};
        scanf("%s",str);
        for(int i=0;i<strlen(str);i++){
            char next[12]={0};
            for(int j=0;j<14;j++){
                if(str[i]==fingering[j][0]){
                    strcpy(next,fingering[j]);
                    break;
                }
            }
            for(int j=1;j<=10;j++){
                if(current[j]=='0' && next[j]=='1'){
                    count[j-1]++;
                }
            }
            strcpy(current,next);
        }
        printf("%d",count[0]);
        for(int j=1;j<10;j++){
            printf(" %d",count[j]);
        }
        printf("\n");
    }
}