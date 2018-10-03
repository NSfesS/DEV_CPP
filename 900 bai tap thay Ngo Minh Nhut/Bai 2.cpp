#include <stdio.h>
int main()
{
    int n, a, S;
    printf("Tinh tong 1 + 2 + 3 +...+ n^2");
    do
   {
	printf("\nNhap n:\t");
        scanf("%d",&n);
    	if(n < 0) printf("Phai nhap n>=0, Nhap lai!");
    }
    while(n < 0);
    a=1;
    S=0;
    while(a <= n)
    {
    	S+= a*a;
    	printf("S(%d)= %d\n",a,S);
    	a++;
	}
	printf("\n\t=>Sn= %d",S);
	return 0 ;
}
// bai nay co nhieu cach viet khac nhau ta co the viet theo cach (while) cung duoc^^.
// chu code khoang trang ro rang, thut ra thut vao hop ly nhe^^.

