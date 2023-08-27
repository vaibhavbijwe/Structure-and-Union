#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef enum {
    RED,
    GREEN,
    BLUE
} Color;

int main() {
    Date today = {25, 8, 2023};
    printf("Today's date: %d-%d-%d\n", today.year, today.month, today.day);

    Color favoriteColor = GREEN;
    printf("Favorite color: %d\n", favoriteColor);

    return 0;
}
