#include <stdio.h>
float input()
{
    float a;
    printf("Enter the value\n");
    scanf("%f", &a);
    return a;
}
float my_sqrt(float n)
{
    float i = 0.0, j = 0.0, b = 0.0;
    for (i = 1; i <= n; i += 2)
    {
        n -= i;
        j++;
    }
    b = (n / i);
    b += j;
    return b;
}
void output(float n, float sqrt_result)
{
    printf("The square root of %.2f is %.2f\n", n, sqrt_result);
}
int main()
{
    float a, sq;
    a = input();
    sq = my_sqrt(a);
    output(a, sq);
    return 0;
}