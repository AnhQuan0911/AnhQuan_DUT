#include <stdio.h>
#include "../headers/nhap.h"

void NhapMang(int mang[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("mang[%d]= ",i);
        scanf ("%d",&mang[i]);
    }
}
void InMang(int mang[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d",mang[i]);
    }
}