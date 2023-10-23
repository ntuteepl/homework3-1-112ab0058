#include <stdio.h>

int main()
{
    int s1,d1,s2,d2,s3,d3;
    scanf("%d%d%d%d%d%d",&s1,&d1,&s2,&d2,&s3,&d3);
    int num=0;
    if((d1>s2)||(d3>s2)){
        num+=1;
    }if((d2>s3)||(d1>s3)){
        num+=1;
    }if((d3>s1)||(d2>s1)){
        num+=1;
    }
    printf("%d",num);
}

