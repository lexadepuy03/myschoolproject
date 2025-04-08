#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 5) {
        printf("%d ", i);
        if ((i % 2) == 0)
            break;
        i++;
    }
    return 0;
}
