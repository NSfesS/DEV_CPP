#include <stdio.h>
int main()
{
    int a=1,S=0,n;
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
	printf("S = %d\n",S);
	system("color 05");
	return 0 ;
}
