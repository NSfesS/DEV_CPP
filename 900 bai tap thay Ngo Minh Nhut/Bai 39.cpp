#include <stdio.h>
#include <math.h>

void notifications();
void input(int *n);
float perform(int n);

int main()
{
    int flag = 1;
    do
    {
        int n;
        notifications();
        input(&n);
        printf("\n\t[KET QUA] Sn = %f", perform(n));
        printf("\nNhap 0 de thoat. Nhap bat ky de tiep tuc [_]\b\b");
        scanf("%d", &flag);
    } while (flag != 0);
    return 0;     
}
void notifications()
{
    printf("\nsqrt(N + 1)(N! + sqrtN((N-1)! +...+ sqrt3(2! + sqrt2(1!)))");
}
void input(int *n)
{
    printf("\nNhap n: \a");
    scanf("%d", &*n);
}

float perform(int n)
{
    float S = 0;
    int gt = 1;
    for (int i = 1; i <= n; i++)
    {
        gt *= i;
        S = pow(double(gt + S), double(float(1) / (i + 1)));
    }
    return S;
}
