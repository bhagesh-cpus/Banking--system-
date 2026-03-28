#include <stdio.h>

int main() {

    int choice;
    float balance = 0, amount;

    while(1) {

        printf("\n--- BANKING SYSTEM ---\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance = balance + amount;
            printf("Money Deposited Successfully\n");
        }

        else if(choice == 2) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if(amount > balance) {
                printf("Insufficient Balance\n");
            }
            else {
                balance = balance - amount;
                printf("Money Withdrawn Successfully\n");
            }
        }

        else if(choice == 3) {
            printf("Your Balance is: %.2f\n", balance);
        }

        else if(choice == 4) {
            printf("Thank you for using the bank system\n");
            break;
        }

        else {
            printf("Invalid Choice\n");
        }
    }

    return 0;
}