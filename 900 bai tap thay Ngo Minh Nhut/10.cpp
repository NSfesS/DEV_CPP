#include <stdio.h>
#include <math.h>
int main()
{
	printf("Tinh T(x,n)=x^n");
	int x,n,T; 
	
	printf("\nNhap x= ");
	scanf("%d",&x);
	
	printf("\nnhap n=");
	scanf("%d",&n);
	
    T=pow(x,n);

printf("\t Tinh %d^%d=%d",x,n,T);

return 0;
}
