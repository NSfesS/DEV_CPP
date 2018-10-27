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
        printf("\n\t\tNhap 0 de thoat. Nhap bat ky de tiep tuc [_]\b\b");
        scanf("%d", &flag);
    } while (flag != 0);
    return 0;
}
void notifications()
{
    printf("\n\t\t\t\tKIEM TRA n CO PHAI SO HOAN THIEN");
}
void input(int *n)
{
    do
    {
        printf("\n**Nhap n: \a");
        scanf("%d", &*n);
        if (n < 0)  printf("\n>>PHAI NHAP  n > 0. NHAP LAI!");
    } while (n < 0);
}
int perform(int n)
{
    int i, S = 0;
    for (i = 1; i < n; i++)
    {
        if (n%i == 0)
            S += i;
    }
    if(S==n) printf("\n>> %d la so hoan thien\n",n);
    else printf("\n>>%d khong la so hoan thien\n", n);
    return 0;
}
