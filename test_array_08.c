#include <stdio.h>

int main() {
    int num[2][4];
    float salary[3][5];
    int x = 0, y = 0;

    while (x < 2) {
        while (y < 4) {
            num[x][y] = (y + 1 + x + x + x + x) * 10;
            y++;
        }
        x++;
        y = 0;
    }

    x = 0;
    y = 0;

    while (x < 2) {
        while (y < 4) {
            printf("%d ", num[x][y]);
            y++;
        }
        printf("\n");
        x++;
        y = 0;
    }

    return 0;
}
