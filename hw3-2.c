#include <stdio.h>

int main() {
    int s1, d1, s2, d2, s3, d3;
    scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);

    int num = 1; // 初始至少需要一辆车

    if (d1 < s2) {
        num += 0; // 第二个任务可以在第一个任务结束后开始
    } else {
        num += 1; // 需要多一辆车
    }
    if (d2 < s3) {
        num += 0; // 第三个任务可以在第二个任务结束后开始
    } else {
        num += 1; // 需要多一辆车
    }

    printf("%d", num);
    return 0;
}
