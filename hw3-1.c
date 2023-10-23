#include <stdio.h>

int main()
{
    int num , ans = 0;
    scanf("%d" , &num);
    
    for(int i = 2 ; i < num ; i ++){
        if(num % i == 0){
            ans = 0;
            break;
        }else{
            ans = 1;
        }
    }
    
    if(ans == 0){
        printf("NO");
    }else{
        printf("YES");
    }
}

