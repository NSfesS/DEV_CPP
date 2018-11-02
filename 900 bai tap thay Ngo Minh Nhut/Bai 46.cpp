#include <stdio.h>

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
        printf("\n[KET QUA] So luong so nguyen le cua %d la: %d", n, perform(n));
        printf("\n\t\tNhap 0 de thoat. Nhap bat ky de tiep tuc[_]\b\b");
        scanf("%d", &flag);
    } while (flag != 0);
    return 0;
}
void notifications()
{
    printf("\n\t\t\t DEM SO LUONG CHU SO LE CUA SO NGUYEN DUONG n NHAP VAO");
}
void input(int *n)
{
    do
    {
        printf("\nNhap n: \a");
        scanf("%d", &*n);
        if (*n < 0)  printf("\n[ERROR] Nhap n >= 0. Nhap Lai!");
    } while (*n < 0);
}
int perform(int n)
{
    int dem = 0;
    if (n == 0) dem = 1;// user input 0 thi se tinh la 1 so le.
    else
    {
        while (n)
        {
              if (n % 2 != 0)
            {
                dem++;
            }
            n /= 10;
        }
    }
    return dem;
}
