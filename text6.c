#include <stdio.h>
//递归计算整数每个数位相加为多少
int DigitSum(int n)
{
    if(n>10)
    {
        return DigitSum(n/10) + n%10;
    }
    return n;
}
int main()
{
    int n=0,ret=0;
    scanf("%d",&n);
    ret = DigitSum(n);
    printf("%d\n",ret);
}