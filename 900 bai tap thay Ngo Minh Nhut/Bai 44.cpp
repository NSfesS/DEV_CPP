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
        printf("\n[KET QUA] Tong cac so nguyen duong cua n la : %d", perform(n));
        printf("\n\t\t Nhap 0 de thoat. Nhap bat ky de tiep tuc[_]\b\b");
        scanf("%d", &flag);
    } while (flag != 0);
    return 0;
}
void notifications()
{
    printf("\n\t\t\t\tTINH TONG CAC SO NGUYEN DUONG n DUOC NHAP VAO");
}
void input(int *n)
{
    do
    {
        printf("\nNhap n: \a");
        scanf("%d", &*n);
        if (*n < 1)  printf("\n>>>[ERROR] Nhap n > 0. Nhap lai!<<<");
    } while (*n < 1);
}
int perform(int n)
{
    int S = 0;
    while (n != 0)
    {
        S += n % 10;// lay du so cuoi se lay tu trai qua phai va giam dan moi lan interation
        n = n / 10;// co nhiem vu lap khi = 0 se dung
    }
    return S;
}
