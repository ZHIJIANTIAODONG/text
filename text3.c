//打印一个数，二进制的奇数位和偶数位
#include <stdio.h>
int Binary(int n)
{
    int i=0;
    printf("偶数位\n");
    for(i=31;i>0;i-=2)
    {
        printf("%d",(n>>i)&1); //偶数
    }
    printf("\n");
    printf("奇数位:\n");
    for(i=30;i>=0;i-=2)
    {
        printf("%d",(n>>i)&1);//奇数
    }
}
int main()
{
    int n=0,ret=0;
    scanf("%d",&n);
    ret = Binary(n);
    //printf("%d\n",n);
}