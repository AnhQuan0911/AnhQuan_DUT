#include "../headers/calc.h"
#include <stdio.h>
int tong (int mang[], int n)
{
    int s=0;
    for (int i = 0; i < n; i++)
    {
        s += mang[i];
    }
    return s;
}
int Max(int mang[],int n)
{
    int max=mang[0];
    for (int i = 0; i < n; i++)
    {
        if (mang[i]>max)
        {
            max = mang[i];
        }   
    }
    return max;
}
int Min(int mang[],int n)
{
    int min=mang[0];
    for (int i = 0; i < n; i++)
    {
        if (mang[i]<min)
        {
            min = mang[i];
        }
        
    }
    return min;
}
void tim(int mang[],int n)
{
    int x,count=0;
    printf("\nnhap phan tu can tim vi tri: ");
    scanf("%d",&x);
    for (int i = 0; i < n; i++)
    {
        if (mang[i]==x)
        {
            count=count+1;
            printf("vi tri xuat hien: %d\n",i);
        }
    } 
    printf("so lan xuat hien: %d\n",count);
}