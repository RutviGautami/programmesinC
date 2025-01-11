#include <stdio.h>

void convertToWords(int num);

// Function to convert a single digit or a two-digit number into words
void printWords(int num) {
    char *single_digits[] = { "Zero", "One", "Two", "Three", "Four", "Five", 
                              "Six", "Seven", "Eight", "Nine" };

    char *two_digits[] = { "", "Ten", "Eleven", "Twelve", "Thirteen", 
                           "Fourteen", "Fifteen", "Sixteen", "Seventeen", 
                           "Eighteen", "Nineteen" };

    char *tens_multiple[] = { "", "", "Twenty", "Thirty", "Forty", "Fifty", 
                              "Sixty", "Seventy", "Eighty", "Ninety" };

    if (num < 10)
        printf("%s ", single_digits[num]);
    else if (num < 20)
        printf("%s ", two_digits[num - 10]);
    else {
        printf("%s ", tens_multiple[num / 10]);
        if (num % 10)
            printf("%s ", single_digits[num % 10]);
    }
}

// Function to convert an amount into words
void convertToWords(int num) {
    if (num == 0) {
        printf("Zero\n");
        return;
    }

    // Arrays for words corresponding to thousands and hundreds
    char *hundreds = "Hundred";
    char *thousands = "Thousand";

    // Handle thousands place
    if (num / 1000 > 0) {
        printWords(num / 1000);
        printf("%s ", thousands);
        num %= 1000;
    }

    // Handle hundreds place
    if (num / 100 > 0) {
        printWords(num / 100);
        printf("%s ", hundreds);
        num %= 100;
    }

    // Handle tens and units place
    if (num > 0) {
        printWords(num);
    }

    printf("\n");
}

int main() {
    int amount;
    
    printf("Enter an amount: ");
    scanf("%d", &amount);
    
    printf("Amount in words: ");
    convertToWords(amount);
    
    return 0;
}

