#include <stdio.h>

/* Create a function that can reverse a string (char array)
 * It should take the string as a parameter and prints out
 * the reversed string.
 *
 *  Example:
 * input:  reverse_string("Green Fox")
 * output: xoF neerG
 *
 * In case of invalid parameter (integers) the function should
 * print out : "invalid parameter"
 */

void reversing(char *arr, char *reversed)
{
    char temp[50];
    printf("Original name: %s\n\n", arr);
    int i = 0;
    for(i = 0; arr[i] != 32 ; i++) {
        temp[i] = arr[i];
    }


}

int main()
{
    char arr[] = "Green Fox";
    char reversed[50];
    reversing(arr, reversed);

    return 0;
 }
