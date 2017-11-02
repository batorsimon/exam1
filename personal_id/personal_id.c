#include <stdio.h>

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
 */
