#include <stdio.h>
void notifications();
void input(int *p);
int perform(int n);

int main()
{
	int flag = 1;
	do
	{
		int n;
		notifications();
		input(&n);
		printf("\n>>Uoc so le lon nhat cua %d la %d", n, perform(n));

		printf("\n\t\t\tNhap 0 de thoat. Nhap bat ky de tiep tuc [_]\b\b");
		scanf("%d", &flag);
	} while (flag != 0);
	return 0;
}
void notifications()
{
	printf("\t\t\t\tTIM UOC SO LE LON NHAT");
}
void input(int *p)
{
	printf("\n**Nhap vao uoc so :\a");
	scanf("%d", &*p);
}
int perform(int n)
{
	int max = -1;
	int i, S;
	for (i = 1; i <= n; i++)
	{
		if (n%i == 0)
		if (i % 2 != 0)	
		S = i;
	}
	for (i = 1; i <= n; i++)
	{
		if (S > max)
			max = S;
	}
	return max;
}
