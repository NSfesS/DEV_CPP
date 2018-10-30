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
        printf("\n\t[KET QUA] S(k) = %d , S(k) < %d", perform(n), n);
        printf("\n\tNhap 0 de thoat. Nhap bat ky de tiep tuc [_]\b\b");
        scanf("%d", &flag);
    } while (flag != 0);
    return 0;
}
void notifications()
{
    printf("\nTINH S(k) sao cho S(k) < n");
}
void input(int *n)
{
    do
    {
        printf("\nInput n: \a");
        scanf("%d", &*n);
        if (*n < 1)  printf("\n>>[Error]. Nhap n > 0 <<");
    } while (*n < 1);
}
int perform(int n)
{
    float S = 0;
    for (int i = 1; S + i < n; i++)// khi Interation(lap) 1 Run thi Conditions lap se + S. de Check Value < n. interation 2 3 n <=> interation 1.
    {
        S += i;
    }
    return S;
}
