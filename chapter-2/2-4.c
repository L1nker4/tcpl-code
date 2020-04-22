#include <stdio.h>
#include <string.h>
void squeeze(char s1[], char s2[]) {
    for (int i = 0; s1[i] != '\0'; i++) {
        for (int j = 0; j < s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                for (int k = i; k < strlen(s1); k++) {
                }
            }
        }
    }
}

int main() { return 0; }