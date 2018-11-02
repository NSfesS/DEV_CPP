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
        printf("\n\t\t[KET QUA] Tich so le cua so nguyen duong %d la: %d\n", n, perform(n));
        printf("\n---------------------------------------------------------------------------------------------------------");
        printf("\n\t\t\tNhap 0 de thoat. Nhap bat ky de tiep tuc[_]\b\b");
        scanf("%d", &flag);
    } while (flag != 0);
    return 0;
}
void notifications()
{
    system("color 03");
    printf("\n\t\t\tTINH TICH CAC CHU SO LE CUA SO NGUYEN DUONG n NHAP VAO");
}
void input(int *n)
{
    do
    {
        printf("\n****Nhap n: \a");
        scanf("%d", &*n);
        if (*n < 1) printf("\n>>>[ERROR] Nhap n > 0. Nhap Lai!<<<");
    } while (*n < 1);
}
int perform(int n)
{
    int S = 1;
    while (n)
    {
        if (n % 2 != 0)
        {
            S *= n % 10;
        }
        n /= 10;
    }
    return S;
}
