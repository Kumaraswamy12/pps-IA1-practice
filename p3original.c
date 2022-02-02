#include <stdio.h>
int input_n()
{
    int a;
    printf("enter the value\n");
    scanf("%d", &a);
    return a;
}
int sum_n(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
        sum += i;
    return sum;
}
void output(int n, int sum)
{
    int i;
    for (i = 1; i < n; i++)
        printf("%d+", i);
    printf("%d is %d\n", i, sum);
}
int main()
{
    int n, sum;
    n = input_n();
    sum = sum_n(n);
    output(n, sum);
    return 0;
}
