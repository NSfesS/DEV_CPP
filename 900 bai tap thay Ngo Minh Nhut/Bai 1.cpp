#include<stdio.h>
int main()
 {
    int n, a, S; 
  	printf("Tinh tong 1+2+3+...+n");
	do
		{
	  	   	printf("\nNhap n:");
	  	   	scanf("\n%d",&n);
	  		if (n < 0) printf("Nhap n>=1. Nhap lai!");
		}
		while (n < 0);
 		/*if (n <0)
   		{
		printf("ban nhap sai");
		return 0;
		}*/
		//a=1 vi tinh tong tu 1->n
		a = 1;
		S = 0;
		while (a <= n)
		{
			S+= a;
			printf("S(%d)=%d\n",a,S);
			a++;	
		}	
    printf("\n\t=>S(n)= %d\n",S);
    return 0 ;
  }
// bai nay co nhieu cach viet khac nhau ta co the viet theo cach (while) cung duoc^^.
// chu code khoang trang ro rang, thut ra thut vao hop ly nhe^^.
