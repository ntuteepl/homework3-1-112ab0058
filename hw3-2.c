#include <stdio.h>

int main()
{
    int s1,d1,s2,d2,s3,d3;
    scanf("%d%d%d%d%d%d",&s1,&d1,&s2,&d2,&s3,&d3);
    int num=1;
    if(d1<=s1){
        num+=1;
    }if(d2<=s3){
        num+=1;
    }if(d1<=s3){
        num+=1;
    }
    printf("%d",num);
}
