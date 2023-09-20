//输入一个数，统计二进制中一的个数
//100/10=10
//将一个数变为二进制的方式打印出来
//判断这个数是否为1，为1则计数器加一
//先% 再/逐渐取小位
//两种计算方式
//第三个算法最优
#include <stdio.h>
int Binary(unsigned int n)
{
    int count = 0;
    while(n)
    {
        if(n%2 ==1)
        {
            count++;
        }
        n = n/2;
    }
    return count;
}
int Binary2(int n)
{
    int i=0;
    int count=0;
    for(i=0;i<32;i++)
    {
        if(((n>>i)&1)==1)
        {
            count++;
        }
    }
    return count;
}
int Binary3(int n)
{
    int count=0;
    while(n)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}
int main()
{
    int n=0;
    int ret=0;
    printf("请输入一个整数：");
    scanf("%d",&n);
    Binary(n);
    ret = Binary3(n);
    printf("这个数二进制有%d个1\n",ret);
    return 0;
}