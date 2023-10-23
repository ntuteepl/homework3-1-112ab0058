#include <stdio.h>

int main() {
    int answer;
        scanf("%d",&answer);
        int answer1=answer/1000;
        int answer2=(answer/100)%10;
        int answer3=(answer/10)%10;
        int answer4=answer%10;
    int A ,B = 0;

    int guess;
        scanf("%d",&guess);
        int guess1=guess/1000;
        int guess2=(guess/100)%10;
        int guess3=(guess/10)%10;
        int guess4=guess%10;

        if (guess1 == answer1) A++;
        if (guess2 == answer2) A++;
        if (guess3 == answer3) A++;
        if (guess4 == answer4) A++;

        if (guess1 == answer2 || guess1 == answer3 || guess1 == answer4) B++;
        if (guess2 == answer1 || guess2 == answer3 || guess2 == answer4) B++;
        if (guess3 == answer1 || guess3 == answer2 || guess3 == answer4) B++;
        if (guess4 == answer1 || guess4 == answer2 || guess4 == answer3) B++;
        printf("%dA%dB", A, B);
        return 0;
}

