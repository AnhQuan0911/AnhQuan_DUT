#include "../headers/m_string.h"
#include <stdio.h>

void SoSanh(int mang1[],int i1,int mang2[],int i2)
{
    int count1=0,count2=0;
    for (int i = 0; i < i1; i++)
    {
        count1+=i;
    }
    for (int  j = 0; j < i2; j++)
    {
        count2+=j;
    }
    if (count1>count2)
    {
        printf("mang1 > mang2");
    }
    else if (count1<count2)
    {
        printf ("mang1 < mang2");
    }
    else
    {
        printf("mang1=mang2");
    }
    
    
    
    

    
    
}
//chen phan tu
void Chen(int mang[],int n)
{

    int x;
    printf("\nnhap vao so can chen: ");
    scanf("%d",&x);
    int v=0, i=0;
    while (mang[i]>x)
    {
        i++;
    }
    v=i;
    for (int i = n-1; i >= v; i--)
    {
        mang[i+1]=mang[i];
    }
    mang[v]=x;
    printf("\nDay so sau khi chen: ");
    for (int i = 0; i < n; i++)
    {
        printf("%5d",mang[i]);
    }
    
    
}

