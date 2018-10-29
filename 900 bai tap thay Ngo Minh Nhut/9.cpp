#include <stdio.h>
int main()
{
    int n;
    printf("Tinh tong 1 x 2 x 3...x N:");
    do
    {
    	printf("\nNhap n:\t");
    	scanf("%d",&n);
    	if(n < 1) printf("Phai nhap n>=1. Nhap lai!:");
	} while(n<1);
	// a<n vì S duoc khai bao (S=1) nen nó duoc tang tu 1->7 
	//VD nhu (while) la S=[1+(1*1)]*[1+(1*2)]*[1+(1*3)]*...*
	float S = 1;
	for(int i = 1; i <= n ; i++)
	{
		S*=i;
		printf("S(%d)= %d\n",i,S);
	}
	printf("\n\tSn= %d",S);
	return 0 ;
}
