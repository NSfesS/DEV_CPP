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
        printf("\n[KET QUA] Tich cac so nguyen duong cua %d la: %d \n", n, perform(n));
        printf("\n\t\t\tNhap 0 de thoat. Nhap bat ky de tiep tuc[_]\b\b");
        scanf("%d", &flag);
    } while (flag != 0);
    return 0;
}
void notifications()
{
    printf("\n\t\t\t\tTINH TICH CAC CHU SO NGUYEN DUONG CUA n NHAP VAO");
}
void input(int *n)
{
    do
    {
        printf("\n**Nhap n : \a");
        scanf("%d", &*n);
        if (*n < 1)  printf("\n>>>[ERROR] Nhap n > 0. Nhap Lai!");
    } while (*n < 1);
}
int perform(int n)
{
    int S = 1;// can than khi tinh *=.
    while (n != 0) // other n < 0.
    {
        n /= 10;
        S *= n % 10;
    }
    return S;
}
