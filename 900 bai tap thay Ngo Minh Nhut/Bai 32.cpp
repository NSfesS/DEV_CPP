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
        printf("\n\t\t>>Nhap 0 de thoat. Nhap bat ky de tiep tuc[_]\b\b");
        scanf("%d", &flag);
    } while (flag != 0);
    return 0;
}
void notifications()
{
    printf("\n\t\t\tKIEM TRA XEM n CO PHAI LA SO CHINH PHUONG");
}
void input(int *n)
{
    do
    {
        printf("\n>>Nhap n: \a");
        scanf("%d", &*n);
        if (n < 0)  printf("\n***PHAI NHAP n > 0. NHAP LAI!");
    } while (n < 0);
}
int perform(int n)
{
    // so chinh phuong la can bac 2 cua 1 so  cho ra 1 so nguyen.
    if (sqrt(n)*sqrt(n) == n) printf("\n=>> %d la so chinh phuong",n);
    else printf("\n=>> %d khon la so chinh phuong", n);
    return 0;
}
