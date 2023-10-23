#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int aa,bb;
    aa=a;
    bb=b;
    int a1,a2,a3,a4;
    a1=a/1000;
    a%=1000;
    a2=a/100;
    a%=100;
    a3=a/10;
    a%=10;
    a4=a;
    int b1,b2,b3,b4;
    b1=b/1000;
    b%=1000;
    b2=b/100;
    b%=100;
    b3=b/10;
    b%=10;
    b4=b;
    int num1,num2;
    num1=a1+a2+a3+a4;
    num2=b1+b2+b3+b4;
    if(num1>num2){
        printf("%d",bb);
    }else if(num1==num2){
        if(a1>b1){
            printf("%d",bb);    
        }
        else if((a1>a2&&a2>b2)){
            printf("%d",bb);
        else if((a1>a2&&a2>b2&&a3>b3)){
            printf("%d",bb);
        else if((a1>a2&&a2>b2&&a3>b3&&a4>b4)){
            printf("%d",bb);
        }
    }else{
        printf("%d",aa);
    }
}

