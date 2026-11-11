#include <stdio.h>
#include <math.h>
int main(){
    int s,n,i;
    double p,r,ans;
    scanf("%d",&s);
    while(s--){
        scanf("%d %lf %d",&n,&p,&i);
        r = pow(1-p,n);
        ans = pow(1-p,i-1)*p;
        if(p==0)printf("0.0000\n");
        else printf("%.4lf\n",(ans*(1-pow(r,100000))/(1-r)));
    }
}