#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); 

    for (int i = 0; i < t; i++) {
        int n, c, m;
        scanf("%d %d %d", &n, &c, &m);

        int ans, x;
        ans = n / c;
        x = ans;
        int sum = 0;
        while (x >= m) {
            sum += (x / m);
            x = (x / m) + (x % m);
        }    
        printf("%d\n", ans + sum);
    }
    return 0;
}

