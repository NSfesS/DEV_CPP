#include <stdio.h>

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
    printf("\n\t\tTINH Sn = 1 + 1/(1+2)+1/(1+2+3+...+n)");
}
void input(int *n)
{
    do
    {
        printf("\n**Nhap n: \a");
        scanf("%d", &*n);
        if (*n <= 0) printf("\nPhai nhap n > 0. Nhap lai!");
    } while (n <= 0);
}
float perform(int n)
{
    float S = 0;
    int T = 0;
    for (int i = 1; i <= n; i++)
    {
        T += i;
        S += float(1) / T;
    }
    printf("\n[KET QUA] Sn = %f", S);
    return S;
}
