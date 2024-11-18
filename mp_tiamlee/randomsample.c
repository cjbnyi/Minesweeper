/* Programmed by: Thomas Tiam-Lee 
Description: This is an example program demonstrating how to generate random integers in a range.
Last modified: AUG-15-2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random;
    
    srand(time(0)); // Initialize the seed for the random number generator

    random = rand() % 10; // Generate a random number from 0 to 9
    printf("%d\n", random);

    random = rand() % 300; // Generate a random number from 0 to 299
    printf("%d\n", random);

    return 0;
}