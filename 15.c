#include <stdio.h>
int main(){
    int n,s=0;
    scanf("%d",&n);
    while(n>0){
        if(n%2==1) s++;
        n/=2;
    }
    printf("%d\n",s);
    return 0;
}