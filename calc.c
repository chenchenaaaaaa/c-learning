#include <stdio.h>

/* 函数声明 */
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
double divi(int a, int b);

int main(void)
{
    int x = 10;
    int y = 3;

    printf("%d + %d = %d\n", x, y, add(x, y));
    printf("%d - %d = %d\n", x, y, sub(x, y));
    printf("%d * %d = %d\n", x, y, mul(x, y));
    printf("%d / %d = %.2f\n", x, y, divi(x, y));

    return 0;
}

/* 函数定义 */
int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

double divi(int a, int b)
{
    return (double)a / b;   /* 先转 double 再除，否则 10/3 会变成 3 */
}