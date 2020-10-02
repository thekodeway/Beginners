

#include <stdio.h>
int sum(int num)
{
    if(num==0)
    {
        return 0;
    }
    return num+(num-1);
}
int main()
{
    int n,sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Sum = %d",sum(n));
    return 0;
}
