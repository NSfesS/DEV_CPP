#include <stdio.h>
#include <math.h>

void notifications();
void input(int *n);
int perform(int n);

int main()
{
    int flag = 1;
    do
    {
        int n;
        notifications();
        input(&n);
        printf("\n[KET QUA] So luong MAX cua %d la: %d", n, perform(n));
        printf("\n----------------------------------------------------------------------------------------------------");
        printf("\n\t\t\tNhap 0 de thoat. Nhap bat ky de tiep tuc[_]\b\b");
        scanf("%d", &flag);
        printf("\n----------------------------------------------------------------------------------------------------");
    } while (flag != 0);
    return 0;
}
void notifications()
{
    printf("\n\t\t\t DEM CHU SO MAX CUA SO NGUYEN DUONG n");
}
void input(int *n)
{
    do
    {
        printf("\n**Nhap n: \a");
        scanf("%d", &*n);
        if (*n < 0)    printf("\n>>>[ERROR] Nhap n >= 0. Nhap Lai!<<<");
    } while (*n < 0);
}
int perform(int n)
{
    int max = n % 10, dem = 0, i;
    if (n == 0) dem = 1;
    do
    {
        i = n % 10;
        if (i == max)   dem++;
        if (i > max)   max = i;// can than de dung thu tu
    } while (n /= 10);
    return dem;
}
