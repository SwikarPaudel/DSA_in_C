#include <stdio.h>

// Function to reverse a number recursively
int reverseNumber(int num, int reversedNum) {
    // Base case: if the number is zero, return the reversed number
    if (num == 0) 
        return reversedNum;
    else {
        // Extract the last digit of the number
        int lastDigit = num % 10;
        // Update the reversed number by adding the last digit
        // and multiplying the existing reversed number by 10
        reversedNum = reversedNum * 10 + lastDigit;
        // Recursive call with num/10 to remove the last digit
        return reverseNumber(num / 10, reversedNum);
    }
}

int main() {
    int num, reversedNum;
    
    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Call the reverseNumber function to reverse the number
    reversedNum = reverseNumber(num, 0);
    
    // Output the reversed number
    printf("Reversed number: %d\n", reversedNum);
    
    return 0;
}
 
