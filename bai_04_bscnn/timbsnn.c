#include <stdio.h>
long long tim_ucln(long long a, long long b) {
    while (b != 0) {
        long long phan_du = a % b;
        a = b;
        b = phan_du;
    }
    return a;
}
int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    if (a <= 0 || b <= 0) {
        printf("Du lieu sai");
    } else {
        long long bcnn = (a / tim_ucln(a, b)) * b;
        printf("%lld", bcnn);
    }   
    return 0;
}
