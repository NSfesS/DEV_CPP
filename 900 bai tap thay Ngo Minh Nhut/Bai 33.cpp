#include <stdio.h>
#include <math.h>

void notifications();
void input(int *n);
float perform(int n);// khi sqrt se cho ra type float_point.
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
    printf("\n\t\t\tTINH sqrt(2 + sqrt(2 +..+ sqrt( 2 + sqrt(2)))) co n dau can");
}
void input(int *n)
{
    do
    {
        printf("\nNhap n:");
        scanf("%d", &*n);
        if (*n < 0) printf("\n>>>PHAI NHAP n > 0. NHAP LAI!");
    } while (*n < 0);
}
float perform(int n)
{
    int i;
    float S = 0;
    S = sqrt(float(2));
    for (i = 2; i <= n; i++)// n dau can, khai bao luc dau da co 2 sqrt.
    {
        S = sqrt(2 + S);
    }
    printf("\n[KET QUA] Sn = %f\n", S);
    return S;
}
