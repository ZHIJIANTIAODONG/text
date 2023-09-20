#include <stdio.h>
//利用指针打印数组内容
int main()
{
    int arr[]={1,2,4,5,6,7};
    int *p = arr;
    int i=0;
    int es=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<es;i++)
    {
        printf("%d\n",*(p+i));
    }
}