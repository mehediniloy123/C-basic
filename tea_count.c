#include <stdio.h>

int main() {
    int t, guess, count = 0;

    if (scanf("%d", &t) != 1) {
        return 0;
    }

    for (int i = 0; i < 5; i++) {
        scanf("%d", &guess);
        if (guess == t) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}