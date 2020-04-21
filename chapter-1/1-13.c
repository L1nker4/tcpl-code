#include <stdio.h>

int main() {
    int c;
    int ndight[26];

    for (int i = 0; i < 26; i++) {
        ndight[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        ndight[c - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        printf("%c: ", 'a' + i);
        for (int j = 0; j < ndight[i]; j++) {
            printf("%s", ">>");
        }
        printf("\n");
    }
    return 0;
}