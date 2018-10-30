// BAI 36.
#include <stdio.h>
#include <math.h>

void notifications();
void input(int *n);
int giaiTHUA(int j);
int main()
{
    int flag = 1;
    do
    {
        int n;
        notifications();
        input(&n);
        float S = 0;
        for (int i = 1; i <= n; i++)
            S = sqrt(S + giaiTHUA(i));
        printf("\n\t=> [KET QUA] Sn = %f", S);
        printf("\n\t\t\t\tNhap 0 de thoat. Nhap bat ky de tiep tuc [_]\b\b");
        scanf("%d", &flag);
    } while (flag != 0);
    return 0;
}
void notifications()
{
    printf("\n\t\t\tTINH sqrt(n! +sqrt(n-1)! + sqrt(n-2)!+...+sqrt(1)) co n dau (sqrt)");
}
void input(int *n)
{
    do
    {
        printf("\n**Nhap n: \a");
        scanf("%d", &*n);
        if (*n <= 0) printf("\n>>>PHAI NHAP n > 0. NHAP LAI!");
    } while (*n <= 0);

}
int giaiTHUA(int j)
{
    int gt = 1;
    for (int i = 1; i <= j; i++)
    {
        gt *= i;
    }
    return gt;
}
