// so nguyen to la so N chi co 2 uoc so nguyen 1 va chinh no bat dau tu 2.
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
        perform(n);
        printf("\n\t\tNhap 0 de thoat. Nhap bat ky de tiep tuc[_]\b\b");
        scanf("%d", &flag);
    } while (flag != 0);
    system("pause");
    return 0;
}
void notifications()
{
    printf("\n\t\t\t\tKIEM TRA n CO PHAI LA SO NGUYEN TO");
}
void input(int *n)
{
    printf("\n>>Nhap n: \a");
    scanf("%d", &*n);
}
int perform(int n)
{
    int i;
    // xet khi user nhap 2 va so chia het cho 2.
    if (n < 2)  printf("\n=>> %d khong la so nguyen to", n);
    else if (n == 2)    printf("\n=>> %d la so nguyen to", n);
    else if (n % 2 == 0)    printf("\n=>> %d khong la so nguyen to", n);
    // xet cac so con lai khi nhap vao ma + them 2 .
    else
    {
        for (i = 3; i <= n; i += 2)
        {
            if (n%i == 0) break;
        }
        if (i == n) printf("\n=>> %d la so nguyen to", n);
        else printf("\n=>> %d khong la so nguyen to", n);
    }
    return 0;
}
