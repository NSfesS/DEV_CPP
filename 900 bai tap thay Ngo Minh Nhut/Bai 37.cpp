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

        printf("\n\t\t\tNhap 0 de thoat. Nhap bat ky de tiep tuc[_]\b\b");
        scanf("%d", &flag);
    } while (flag != 0);
    return 0;
}
void notifications()
{
    printf("\n\t\tTINH sqrt(n)(n + sqrt(n) - 1(n - 1 +...+ sqrt(3)(3 + sqrt(2)(2))) co (n-1) sqrt");
}
void input(int *n)
{
    do
    {
        printf("\n**Nhap n: \a");
        scanf("%d", &*n);
        if (n <= 0) printf("\n>>PHAI NHAP n > 0. NHAP LAI!");
    } while (*n <= 0);
}
float perform(int n)
{
    float S = pow(double(2),double((float(1)/2)));
    for (int i = 3; i <= n; i++)
    {
        S = pow(double(i + S), double(float(1) / i));
    }
    printf("\n[KET QUA] Sn = %f", S);
    return S;
}
