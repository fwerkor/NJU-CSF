#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
    int n;
    bool a[16],fu=0;
    scanf("%d",&n);
    if(n<0){
        fu=1;
        n=-n;
    }
    for(int i=15;i>=0;i--){
        a[i]=n%2;
        n/=2;
    }
    if(!fu){
        for(int i=0;i<=15;i++){
            if(a[i]) printf("1");
            else printf("0");
        }
        printf("\n");
    }else{
        for(int i=0;i<=15;i++){
            if(a[i]) a[i]=0;
            else a[i]=1;
        }
        bool j=1;
        for(int i=15;i>=0;i--){
            if(j){
                j=0;
                if(a[i]){
                    a[i]=0;
                    j=1;
                }else{
                    a[i]=1;
                }
            }
        }
        for(int i=0;i<=15;i++){
            if(a[i]) printf("1");
            else printf("0");
        }
        printf("\n");
    }
    return 0;
}