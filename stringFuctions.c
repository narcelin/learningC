/*
string.h functions reviewed in this file
strlen - location of '\0'
strcpy - copy
    strncopy - copy a certain # of characters
strcat - append
    strncat - append certain # of characters
strcmp - compare
    strncmp - compare certain # of charaters
*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char word0[20] = "SKATE"; 
    char word1[20] = "BOARD";
    char word2[20] = "SKIM";

    int len = strlen (word0);
    if(strcmp(word0, word1) == 0); // will compare the entire word
    if(strncmp(word0, word2, 2) == 0); // will compare the first two characters
    strcat(word0, word1); //word = word0 + word1; word0 is the array that will be modified
    len = strlen(word0); //will now be 10 since there was another word appended
    strncar(word1, word2, 3); //first word1 gets 3 chars appended from word2


    

    return 0;
}