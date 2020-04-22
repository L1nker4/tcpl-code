#include <stdio.h>
#include <string.h>

void htoi(char * a) {
    int n, m;
    int f = 0;
    for (int i = 0; i < strlen(a); i++) {
        f *= 10;
        if (a[i] == 'A' || a[i] == 'B' || a[i] == 'C' || a[i] == 'D' ||
            a[i] == 'E' || a[i] == 'F') {
            f = f + (a[i] - 'A' + 10);
        } else {
            f = f + (a[i] - '0');
        }
    }
    printf("%d\n", f);
}

int main() {
    htoi("23AB");
    return 0;
}