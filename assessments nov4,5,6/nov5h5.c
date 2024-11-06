#include <stdio.h>

int calculate_bill(int units) {
    int bill = 0;
    if (units <= 100) {
        bill = units * 5;
    } 
    else if (units <= 200) {
        bill = 100 * 5 + (units - 100) * 8;
    } 
    else {
        bill = 100 * 5 + 100 * 8 + (units - 200) * 10;
    }
    
    return bill;
}

int main() {
    int units;
    printf("Enter units consumed (1-1000): ");
    scanf("%d", &units);
    
    if (units < 1 || units > 1000) {
        printf("Invalid units. Please enter units between 1 and 1000.");
    } else {
        printf("Total Bill: %d", calculate_bill(units));
    }
    
    return 0;
}