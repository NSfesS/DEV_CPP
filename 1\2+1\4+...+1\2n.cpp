#include<stdio.h>
// dung quan tam thang nay
#include<stdlib.h>
int main()
{
	//dung quan tam thang nay
	system("color 04");
	int i, n;
	// so thap phan nen ta phai khai nao S bang float
	float S=0;
	do
	{
		printf("\nNhap n: ");
		scanf("%d", &n);
		//xet dieu kien nhap vao
		if(n < 1)
		{
			printf("\nN phai lon hon hoac bang 1. nhap lai di!");
		}

	}
	// dung while(n<1) de tao dieu kien nau nhap n<1 thi quay lai nhap dung 
 	while(n < 1);
	for(i=1;i<=n;i++)
	{
		// phai la 1.0 / i, vi S duoc khai bao theo float-point
		S+= 1.0 / (2*i);
	}
	printf("\n 1/2 + 1/4 +...+1/2*%d: %f",n,S);
	return 0;
}
