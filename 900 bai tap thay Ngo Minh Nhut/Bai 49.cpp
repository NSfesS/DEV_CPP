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
        printf("\n[KET QUA] So chan dau tien cua so nguyen duong %d la : %d\n", n, perform(n));
        printf("\n---------------------------------------------------------------------------------");
        printf("\n\t\t\t\tNhap 0 de thoat. Nhap bat ky de tiep tuc[_]\b\b");
        scanf("%d", &flag);
        printf("\n----------------------------------------------------------------------------------");
    } while (flag != 0);
    return 0;
}
void notifications()
{
    printf("\n\t\t\t\t TIM CHU SO NGUYEN DUONG DAU TIEN CUA n");
}
void input(int *n)
{
    do
    {
        printf("\n**Nhap n: \a");
        scanf("%d", &*n);
        if (*n < 1) printf("\n>>>[ERROR] Nhap n > 0. Nhap Lai!<<<");
    } while (*n < 1);
}
int perform(int n)
{   
    int i;
    do
    {
        i = n % 10; // so du luon la chu so dau tien.
    } while (n /= 10);// khi chia ra so 0 la dung.
    return i;
}
