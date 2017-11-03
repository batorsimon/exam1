#include <stdio.h>
#include <string.h>

/* Create a personal ID registers
 * You should store the following data in a structure, called "person":
 * - the name of the person (which is shorter than 256 characters)
 * - the year of the birth (1990)
 * - the type of the highest qualification (as a custom type, see below)
 *
 * You should store the qualification type in an enumeration ("qualification"),
 * the valid types are:
 *  - elementary-school
 *  - high-school
 *  - bsc-degree
 *  - master-degree
 *  - phd
 *
 * The "person" -s are stored in an array.
 *
 * Implement the following functions:
 * - get_oldest_alive()
 *    - it should return the age of the oldest person
 * - get_qualification_count()
 *    - it returns the count of persons which has "quali" qualification
 * For both functions you have to add the needed parameters!
 * You don't need to implement a function, which initializes the persons, just do it manually from main().
E.g.initialize your persons in main() with 4 elements in order to be able to test your 2 implemented functions if it works correctly.
 */

 typedef struct{
    char person[255];
    int birth_date;
    char qualification[30];
 } ID;

 void filling_structure(ID *arr)
 {
     strcpy(arr[0].person, "John Smith");
     strcpy(arr[1].person, "John Wick");
     strcpy(arr[2].person, "Matt Damon");
     strcpy(arr[3].person, "Dave Mirra");
     strcpy(arr[4].person, "Kiss Balazs");

     arr[0].birth_date = 1993;
     arr[1].birth_date = 1981;
     arr[2].birth_date = 1968;
     arr[3].birth_date = 1972;
     arr[4].birth_date = 1984;

     strcpy(arr[0].qualification, "Elementary School");
     strcpy(arr[1].qualification, "High School");
     strcpy(arr[2].qualification, "BSC degree");
     strcpy(arr[3].qualification, "Master degree");
     strcpy(arr[4].qualification, "PHD");

 }
int get_oldest_alive()
{
   // return age;

}

int get_qualificaton_count()
{


   // return counter;
}
 int main()
 {
     ID arr[10];
     filling_structure(arr);

     printf("%s", arr);

     return 0;
 }
