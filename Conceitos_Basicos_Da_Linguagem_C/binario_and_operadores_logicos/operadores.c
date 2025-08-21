#include <stdio.h>

int main() {
    int a = 1; // verdadeiro
    int b = 0; // falso

    printf("a && b = %d\n", a && b);  // 1 && 0 = 0 (false)
    printf("a || b = %d\n", a || b);  // 1 || 0 = 1 (true)
    printf("!a     = %d\n", !a);      // !1 = 0 (false)
    printf("!b     = %d\n", !b);      // !0 = 1 (true)
}
