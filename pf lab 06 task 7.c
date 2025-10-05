#include <stdio.h>
int main() {
    int amount;
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0;
    printf("Enter the amount in cents: ");
    scanf("%d", &amount);
    while (amount > 0) {
        if (amount >= 25) {
            quarters++;
            amount=  amount-25;
        } 
        else if (amount >= 10) {
            dimes++;
            amount=amount-10;
        } 
        else if (amount >= 5) {
            nickels++;
            amount=amount-5;
        } 
        else {
            pennies++;
            amount=amount-1;
        }
    }
    printf("Coins needed:\n");
    printf("Quarters (25¢): %d\n", quarters);
    printf("Dimes    (10¢): %d\n", dimes);
    printf("Nickels   (5¢): %d\n", nickels);
    printf("Pennies   (1¢): %d\n", pennies);
    return 0;
}

