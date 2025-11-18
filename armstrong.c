\* program to check if a number is a ARMSTRONG NUMBER nor not*\
#include <stdio.h>
int main(){
    int n,sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    int org=n;
    while(n!=0){
        int last=n%10;
        sum=sum+(last*last*last);
        n=n/10;

    }
    if (sum==org)printf("yeahh its a armstrong number!!!");
    else printf("its not a armstrong number :)");
    return 0;
}