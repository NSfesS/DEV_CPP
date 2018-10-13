#include <stdio.h>
#define MAX 50
int main()
	{
	printf("SAP XEP TANG DAN CUA PHAN TU\n");
    int a[MAX];
    int n, c;
    do
    {
    	printf("Nhap n phan tu mang:\t");
    	scanf("%d",&n);
    	if(n <=0 || n > MAX) printf("\nNhap sai, Nhap lai!");
	} while(n <=0 || n > MAX);
	for(c=0;c<=n;c++)
	{
		// xet gia tri nhap vao phan tu phai a[c] > 0
	do
	{
		printf("\nNhap a[%d]=",c);
		scanf("%d",&a[c]);
		if (a[c] < 0) printf("\nNhap (ptu > 0), Nhap lai!");
	 	} while(a[c] < 0);
	}
	printf("\nMang da nhap\n",a[c]);
	// sao xep mang tang dan
	int j,temp;// khai bao temple thay the gia tri a[_]
	for (c=0;c<n-1;c++)
	{
		for(j=c+1;j<n;j++)
		{
			if(a[c]>a[j])
			// code sap xep gia tri tang dan a[_]
			{
				temp=a[c];
				a[c]=a[j];
				a[j]=temp;
			}
		}
	}
	// in ra mang vua nhap 
	for(c=0;c<=n;c++)
	{
		printf("%d\t",a[c]);	
	}
	return 0 ;
	}
