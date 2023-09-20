//编写实现，两个整数n与m的二进制表达中，有多少个bit不同
#include <stdio.h>
int get_diff(int n,int m)
{
    int count=0;
    int tmp=0;
    tmp = n^m;
    while(tmp)
    {
        tmp=tmp&(tmp-1);
        count++;
    }
    return count;
}
int main()
{
    int m=0;
    int n=0;
    int ret=0;
    printf("输入两个整数");
    scanf("%d %d",&n,&m);
    ret=get_diff(n,m);
    printf("%d",ret);
}