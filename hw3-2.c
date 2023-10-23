#include <stdio.h>

int main()
{
    int s1,d1,s2,d2,s3,d3;
    scanf("%d%d%d%d%d%d",&s1,&d1,&s2,&d2,&s3,&d3);
    int num=0;
    if ((s1<d2)&&(s2<d1)){
        num+=1;
    }
    if ((s2<d3)&&(s3<d2)){
        num+=1;
    }
    if ((s3<d1)&&(s1<d3)){
        num+=1;
    }
    if (num==0){
        num=1;
    }
    printf("%d",num);
}
