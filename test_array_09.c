#include <stdio.h>

int main() {
    int num[2][4];
    float salary[3][5];
    int x = 0, y = 0;

    do {
        do {
            num[x][y] = (y + 1 + x + x + x + x) * 10;
            y++;
        } while (y < 4);
        x++;
        y = 0;
    } while (x < 2);

    x = 0;
    y = 0;

    do {
        do {
            printf("%d ", num[x][y]);
            y++;
        } while (y < 4);
        printf("\n");
        x++;
        y = 0;
    } while (x < 2);

    return 0;
}
