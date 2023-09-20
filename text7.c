//实现n的k次方，递归
#include <stdio.h>
//n^k = n* n^(k-1)
//
double Pofunction(int n,int k)
{
    if(k<0)
        return (1.0/Pofunction(n,-k));
    else if(k == 0)
    {
        return 1;
    }
    else
        return n*Pofunction(n,k-1);
}

int main()
{
    int n=0,k=0;
    scanf("%d %d",&n,&k);
    Pofunction(n,k);
    double ret=0;
    ret = Pofunction(n,k);
    printf("%lf\n",ret);
}