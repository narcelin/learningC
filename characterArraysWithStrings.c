#pragma warning(disable:6031) //ignore scanf warnings

#include <stdio.h> //for printf and scanf
#include <string.h> //for strlen and strcmp functions
#include <ctype.h> //for tolower and toupper functions

int main() {
    char word[20]; 
    printf("Enter a work: ");
    scanf("%s", word); //word is a character pointer. word[1] is a char.
    int locationOfNullChar = strlen(word); //This will tell you were the null char is in the array. Null char is \0 and is placed after the word.
    for(int i = 0; i < locationOfNullChar; i++){
        // printf("\nLOOP: %d", i);
        word[i] = toupper(word[i]);
    };
    printf("Null char is at %d and the word is %s", locationOfNullChar, word);
    printf("\n NULL CHAR -> %c", word[locationOfNullChar]); //Does not print?

    return 1;
}


