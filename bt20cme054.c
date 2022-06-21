#include <stdio.h>
int main()
 {
    int n, res = 0, x;
    scanf("%d", &n);
    while (n != 0) {
        x = n % 10;
        res = res * 10 + x;
        n /= 10;
    }
    printf("%d", res);
    return 0;
}