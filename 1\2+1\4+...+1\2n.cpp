#include<stdio.h>
#include<stdlib.h>
int main()
{
	system("color 04");
	int i, n;
	float S =0;
	do
	{
		printf("\nNhap n: ");
		scanf("%d", &n);
		if(n < 1)
		{
			printf("\nN phai lon hon hoac bang 1. nhap lai di!");
		}

	}
	while(n < 1);// dung while(n<1) de tao dieu kien nau nhap n<1 thi quay lai nhap dung 

	for(i=1;i<=n;i++)
	{
		S+= 1.0 / (2*i);  // phai la 1.0 / i, vi S duoc khai bao theo float-point
	}
	printf("\n 1/2 + 1/4 +...+1/2*%d: %f",n,S);
	return 0;
}
