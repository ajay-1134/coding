#include<stdio.h>
int main()
{
    int n = 45678;
    int sum = 0;
    sum += n%10;
    n = n/10;
    sum += n%10;
    n = n/10;
    sum += n%10;
    n = n/10;
    sum += n%10;
    n = n/10;
    sum += n%10;
    n = n/10;
    printf("%d", sum);
}