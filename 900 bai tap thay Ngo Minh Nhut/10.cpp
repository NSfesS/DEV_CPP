#include <stdio.h>
#include <math.h>
int main()
{
	printf("Tinh T(x,n)=x^n");
	int x,n,T; 
	
	printf("\nNhap x=\a");// \a phat ra  tieng bip de thong bao user nhap gtri.
	scanf("%d",&x);
	
	printf("\nnhap n=\a");
	scanf("%d",&n);
	// tinh luy thua ta khai bao Phep tinh = pow(hang so , so mu);
    	T=pow(x,n);

	printf("\t Tinh %d^%d=%d",x,n,T);

return 0;
}
