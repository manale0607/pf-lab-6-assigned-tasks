#include <stdio.h>
int main() {
    int balance = 5000;  
    int withdraw;
    printf("Welcome to the ATM\n");
    printf("Your starting balance is: %d\n\n", balance);
    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%d", &withdraw);
        if (withdraw <= 0) {
            printf("Invalid amount! Please enter a positive number.\n\n");
        } 
        else if (withdraw > balance) {
            printf("Insufficient balance! You have only %d left.\n\n", balance);
        } 
        else {
            balance=balance-withdraw;
            printf("Withdrawal %d successful. Remaining balance: %d\n\n", withdraw,balance);
        }
    }
    printf("Your balance is now zero. Thank you for using the ATM!\n");
    return 0;
}

