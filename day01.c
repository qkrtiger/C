
// 최대공약수 구하기
#include <stdio.h>
int main(void)
{
    int x, y, r;

    printf("두 개의 정수를 입력하시오(큰 수, 작은수) : ");
    scanf("%d%d", &x, &y);

    while (y != 0)
    {
        r = x % y;
        x = y;
        y = r;
    }
    printf("최대 공약수는 %d입니다.\n", x);
    return 0;
}

// 반복을 이용한 네모 그리기
#include <stdio.h>
int main(void)
{
    int i;
    printf("****************\n");

    for (i = 0; i < 5; i++)
        printf("*              *\n");

    printf("****************\n");

    return 0;
}
