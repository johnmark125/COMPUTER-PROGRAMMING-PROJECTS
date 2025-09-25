#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter positive numbers to ADD (zero or negative number to STOP)\n");

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num <= 0) {
            break; // stop if zero or negative
        }

        sum += num; // add only positive numbers
    }

    printf("Total sum is: %d\n", sum);

    return 0;
}
