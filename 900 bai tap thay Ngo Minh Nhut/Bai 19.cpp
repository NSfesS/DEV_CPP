#include <stdio.h>
#include <math.h>

void notifications();
void input(float *x, int *n);
float mu(float x, int a);
int giaiTHUA(int j);
int main()
{
	int flag = 1;
	do
	{
        float x;
        int  n;
		notifications();
		input(&x, &n);
        float S = 0;
        for (int i = 0; i <= n; i++)
            S += mu(x,i) / giaiTHUA(i);
		printf("\n\t=>>[KET QUA] Sn = %f", S + 1);
		printf("\nNhap 0 de thoat. Nhap so bat ky de tiep tuc[_]\b\b");
		scanf("%d", &flag);
	} while (flag != 0);
	return 0;
}
void notifications()
{
	printf("\t\t\t\tTINH S(n) = 1 + x + x^3/3! + x^5/5! + … + x^(2n+1)/(2n+1)!");
}
void input(float *x, int *n)
{
	printf("\n**Input x:\a");
	scanf("%f", &*x);
    do
    {
        printf("\n**Input n:\a");
        scanf("%d", &*n);
        if (*n < 1) printf("\nNhap n > 0. Nhap lai!");
    } while (*n < 1);
}
float mu(float x, int a)
{
    float M = pow(double(x), double((2 * a) + 1));
    return M;
}
int giaiTHUA(int j)
{
    int gt = 1;
    for (int i = 1; i <= j; i++)
    {
        int T = 2 * i + 1;
        gt *=T*(T-1);
    }
    return gt;
}
