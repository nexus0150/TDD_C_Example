#include "PrimeNumber.h"

#define PRIME_NUMBERS_ARRAY_SIZE 4
int PrimeNumbers[PRIME_NUMBERS_ARRAY_SIZE] = { 1, 3, 7, 11 };

int isPrimeNumber(int numberToFind)
{
    int retVal = 0;
    int i = 0;

    while (i < PRIME_NUMBERS_ARRAY_SIZE)
    {
        if (PrimeNumbers[i] == numberToFind)
        {
            retVal = 1;
            break;
        }

        i++;
    }

    return retVal;
}
