// Condition la khong cho nguoi dung nhap so 0;
#include <stdio.h>
#include <math.h>
int main()
{
	int flag = 1;
	do
	{
		// user co the nhap x la 1 complex nen ep (float) se good^^
		float x;
		int n;
		do
		{
			printf("\n\nTinh S(n) = x^2 + x^4 + ... + x^2n");
			printf("\nNhap x bat ky:\a");
			scanf("%f", &x);
			if( x==0 )	printf("\n>>Phai nhap x!=0. Nhap lai!<<"); 
			do
			{
			printf("\nNhap n bat ky:\a");
			scanf("%d", &n);
			// xet dieu kien x voi n nhap vo cho thoa theo de bai^^
			if (n < 2) printf("\n>>Phai nhap n >= 2. Nhap lai!<<");
			}while(n < 2);	
		} while (x == 0);
		int i;
		float S = 0;
		for (i = 1; i <= n; i++)
		{
			// operater (pow) khai bao #include <math.h>
			S += pow(double(x),double(2*i));
			printf("\nS(%d)=%.3f", i, S);
		}
		printf("\n\tS(n)=%.3f", S);
		printf("\nNhap 0 de thoat, Nhap bat ky de tiep tuc:[_]\b\b");
		scanf("%d", &flag);
	} while (flag != 0);
	return 0;
}
