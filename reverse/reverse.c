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

    int j = 0;
    for(i = i+1; arr[i] != '\0'; i++) {
        reversed[j] = arr[i];
        j++;
    }
    reversed[j] = ' ';
    reversed[j+1] = '\0';

    for(i = 0; reversed[i] != '\0'; i++);  //stores the length of reversed name

    for(j = 0; temp[j] != '\0'; j++, i++)
    {
        reversed[i] = temp[j];
    }
    reversed[i] = '\0';
    printf("The name reversed: %s\n", reversed);
}

int main()
{
    char arr[] = "Green Fox";
    char reversed[50];
    reversing(arr, reversed);

    return 0;
 }
