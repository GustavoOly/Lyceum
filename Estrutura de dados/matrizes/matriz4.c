#include <stdio.h>

int main() {
    char carc[5] = {'a', 'b', 'c', 'd', 'e'};
    char str[5][10] = {"abc", "def", "ghi", "jkl", "mno"};
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d\n", carc[i]);
    }
    for (i = 0; i < 5; i++) {
        printf("%s\n", str[i]);
    }
    return 0;
}