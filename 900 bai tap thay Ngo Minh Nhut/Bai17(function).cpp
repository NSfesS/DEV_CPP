#include <stdio.h>
#include <math.h>

void notifications();
void input(float *x, int *n);
float mu(float x, int n);
int giaiTHUA(int x);
int main()
{
    int flag = 1;
    do
    {
        float x;
        int n;
        notifications();
        input(&x, &n);
        //mu(x, n);
        //giaiTHUA(n,i);
        float S = 0;
        for (int i = 1; i <= n; i++)
            S += mu(x,i) / giaiTHUA(i);
        printf("\n\t[KET QUA] Sn = %f\n", S);
        printf("\nNhap 0 de thoat. Nhap bat ky de tiep tuc[_]\b\b");
        scanf("%d", &flag);
    } while (flag != 0);
    return 0;
}
void notifications()
{
    printf("\n\t\t\tTINH x + (x^2)/2! + (x^3)/3! + ... + (x^n)/N!");
}
void input(float *x, int *n)
{
    printf("\n**Nhap x: \a");
    scanf("%f", &*x);
    do
    {
        printf("\n**Nhap n: \a");
        scanf("%d", &*n);
        if (*n < 1) printf("\nNhap n > 0. Nhap lai!");
    } while (*n < 1);
}
float mu(float x, int n)
{
    float M =0 ;
    for (int i = 1; i <= x; i++)
         M = pow(double(x), double(n));
    return M;
}
int giaiTHUA(int x)
{
    int gt = 1;
    for (int i = 1; i <= x; i++)
        gt *= i;
    return gt;
}
