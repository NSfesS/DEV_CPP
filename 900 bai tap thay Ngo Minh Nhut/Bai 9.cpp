#include <stdio.h>
int main()
{
    int n,a,p,S;
    printf("Tinh tong 1 x 2 x 3...x N;");
    do
    {
    	printf("\nNhap n:\t");
    	scanf("%d",&n);
    	if(n<1) printf("Phai nhap n>=1. Nhap lai!:");
	}
	while(n<1);
	a=0;
	// khai bao (p) co tac dung intput thu tu S(1)->S(7)
	p=1;
	S=1;
	// a<n vì S duoc khai bao (S=1) nen nó duoc tang tu 1->7 vong lap bat dau
        // VD (while) S=(1+(1*1))*(1+(1*2))*....*(1+(1*6))
	while(a<n)
	{
		S+=S*a;
		printf("S(%d)= %d\n",p,S);
		a++;
		p++;// dem gtri tu 1 den 7
	}
	printf("\n\tSn= %d",S);
	return 0 ;
}
