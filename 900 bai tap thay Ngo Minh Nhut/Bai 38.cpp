#include <stdio.h>
#include <math.h>

void notifications();
void input(int *n);
float perform(int n);

int main()
{
    int flag = 1;
    do
    {
        int n;
        notifications();
        input(&n);
        perform(n);
        printf("\n\t\tNhap 0 de thoat. Nhap bat ky de tiep tuc[_]\b\b");
        scanf("%d", &flag);
    } while (flag != 0);
    return 0;
}
void notifications()
{
    printf("\n\t\t\tTINH sqrt(n+1)(n + sqrt(n)(n-1 +...+sqrt(3)(2 + sqrt(2)(1)))) co n dau can");
}
void input(int *n)
{
    do
    {
        printf("\nNhap n: \a");
        scanf("%d", &*n);
        if (*n <= 0)    printf("\n PHAI NHAP n > 0. NHAP LAI!");
    } while (*n <= 0);
}
float perform(int n)
{
    //float S = pow(double(1), double(float(1) / 2));
    float S = 0;
    for (int i = 1; i <= n; i++)
    {
        S = pow(double(i + S), double(float(1) / (i + 1)));
    }
    printf("\n [KET QUA] Sn = %f", S);
    return S;
}
