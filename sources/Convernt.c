#include "../headers/Convernt.h"
#include <stdio.h>



void DecTo(void)
{
    int a;
    int r,sum=0,i=1;
    printf("nhap so tu nhien co so 10: ");
    scanf("%d",&a);
    printf("ma hex la: 0x%X\n",a);
    do
    {
        r=a%2;
        sum=sum + (i*r);
        a=a/2;
        i=i*10;
    }while(a>0);
    printf("ma bin la: 0b%d",sum);
}

