#include <stdio.h>

int main() {
    int x, y, z;

    for (x = 1; x <= 3; x++) {
        for (y = 1; y <= 3; y++) {
            z = x * x * x + y * y * y;
            printf("X: %d Y: %d Z = %d\n", x, y, z);
        }
    }

    return 0;
}
