#include <stdio.h>
int main() {

    int atmPin;
    printf("enter your atm pin : ");
    scanf("%d",&atmPin);
    
    if (atmPin == 2308)
    {
        printf("Transaction successfully");
    } else {
        printf("your card has been blocked by bank please contact your home branch");
    }
    

    return 0;
}