#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("color 02 ");
    int a = 1, n;
    float S = 0;
    		do
		{
			printf("\nNhap n:");
			scanf("%d",&n);
			if(n < 1)
			{
				printf("Nhap sai\nNhap lai:");
			}
		}
		while(n<1);
			//while (a<=n)
			for (a=1;a<=n;a++)
			{
			S+=1.0/((2*n) +1);
		//%f.2 lam tron gia tri float-point den 2
			printf("list plus%f.2\n",S);
			a++;
			}
	//\t khoang trang
		printf("Sn=1+1\3+1\5+...+1\(2n+1):\t%f",S);
		return 0 ;
}
