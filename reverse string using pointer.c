#include <stdio.h>

// Function to reverse the string using pointers
void reverseString(char *start) {
    char *end = start, temp;

    // Move the 'end' pointer to the null character of the string
    while(*end){end++;}
    end--;  // Move back from null terminator to the last character

    // Swap characters from start and end, moving them towards each other
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char input[100];

    // Ask the user for the string input
    printf("Enter a string: ");
    gets(input);  // Reads the string input

    reverseString(input);
    printf("Reversed string: %s\n", input);
    return 0;
}