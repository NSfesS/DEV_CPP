#include <stdio.h>
int main()
{
    int a=1,n;
    float S=0;
    do
	{
		printf("Nhap n bat ky:\t");
        scanf("%d",&n);
    	if(n<0) printf("Phai nhap n>0, Nhap lai:\t");
    }
    while(n<0);
    	while(a<=n)
    	{
    		S+=a*a;
    		printf("%d\n",S);
    		a++;
		}
	printf("Tong Sn= %f\n",S);
	return 0 ;
}
