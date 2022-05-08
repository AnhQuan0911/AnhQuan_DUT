#include <stdio.h>
#include "../headers/calc.h"
#include "../headers/nhap.h"
#include "../headers/Convernt.h"
#include "../headers/m_string.h"

int main()
{
    int n,mang[100];
    printf("so phan tu lon hon 20: ");
    scanf ("%d",&n);
    NhapMang(mang,n);
    printf("In mang vua nhap: ");
    InMang(mang,n);
    printf("\nSum= %d",tong(mang,n));
    printf("\nMAX= %d",Max(mang,n));
    printf("\nMIN= %d",Min(mang,n));
    tim(mang,n);
    //
    DecTo();
    printf("\nSo sanh mang1 va mang2 \n");
    int mang1[100]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int mang2[100]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};
    SoSanh(mang1,20,mang2,21);
    //
    printf("\nnhap n= ");
    scanf ("%d",&n);
    NhapMang(mang,n);
    printf("In mang vua nhap: ");
    InMang(mang,n);
    // int mang[100]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    Chen(mang,n);





}
