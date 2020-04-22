#include <stdio.h>

int strlen(char s[]) {
    int i;
    while (s[i] != '\0') {
        ++i;
    }
    return i;
}

int main() {
    char s[] = "hello";
    printf("%d\n", strlen(s));
    return 0;
}