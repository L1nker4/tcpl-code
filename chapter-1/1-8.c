#include <stdio.h>

int main() {
    int c;
    int blank = 0, tab = 0, nextline = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            blank++;
        } else if (c == '\t') {
            tab++;
        } else if (c == '\n') {
            nextline++;
        }
    }
    printf("\nblank  = %d, tab = %d, nextline = %d \n", blank, tab, nextline);
    return 0;
}