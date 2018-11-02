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
        perform(n);
        printf("\n----------------------------------------------------------------------------------------------------");
        printf("\n\t\t\tNhap 0 de thoat. Nhap bat ky de tiep tuc[_]\b\b");
        scanf("%d", &flag);
        printf("\n----------------------------------------------------------------------------------------------------");
    } while (flag != 0);
    return 0;
}
void notifications()
{
    printf("\n\t\t\t DAO NGUOC SO NGUYEN DUONG n");
}
void input(int *n)
{
    do
    {
        printf("\n**Nhap n: \a");
        scanf("%d",&*n);
        if (*n < 1)    printf("\n>>>[ERROR] Nhap n > 0. Nhap Lai!<<<");
    } while (*n < 1);
}
int perform(int n)
{
    printf("\n\t[KET QUA] Dao lai cua %d la: ", n);
    do
    {
        printf("%d", n % 10); // lay du convert lai.
    } while (n /= 10);
    return 0;
}
