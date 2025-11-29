#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long mul, num1, num2, num3;
        scanf("%lld %lld %lld %lld", &mul, &num1, &num2, &num3);

        long long mul_three_num = num1 * num2 * num3;

        if (mul % mul_three_num != 0) {
            printf("-1\n");
        } else {
            long long res = mul / mul_three_num;
            printf("%lld\n", res);
        }
    }

    return 0;
}
