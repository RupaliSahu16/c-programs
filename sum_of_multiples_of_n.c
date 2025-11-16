//sum of multiples of n//
#include <stdio.h>
int main(){
    int n,m,sum=0;
    printf("enter the number and multiple respectively:\n");
    scanf("%d %d",&n,&m);
    for(int i=0;i<=m;i++){
        if(i%n==0){
            sum=sum+i;
        }
    }
    printf("SUM = %d",sum);
    return 0;
}