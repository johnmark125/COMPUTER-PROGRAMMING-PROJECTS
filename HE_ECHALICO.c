#include <stdio.h>

int main() {
    float balance = 500;
    float amount;
    int choice;

    do {
        printf("\nBSIT BANK\n");
        printf("[1] Balance Inquiry\n[2] Deposit\n[3] Withdraw\n[4] Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
            printf("Current balance: %.2f\n", balance);
        else if (choice == 2) {
            printf("Enter deposit amount: ");
            scanf("%f", &amount);
            balance += amount;
            printf("%.2f deposited successfully!\n", amount);
        }
        else if (choice == 3) {
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);
            if (balance - amount < 100)
                printf("Withdrawal denied! Maintain at least P100.00 in your account.\n");
            else {
                balance -= amount;
                printf("You withdrew %.2f successfully!\n", amount);
            }
        }
        else if (choice == 4)
            printf("Thank you for using BSIT BANK!\n");
        else
            printf("Invalid choice.\n");

    } while (choice != 4);

    return 0;
}