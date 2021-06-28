#include "holberton.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: pointer input.
 * Return: counter.
 */

int _strlen(char *s)
{
    int counter = 0;

    while (*s)
    {
        counter++;
        s++;
    }
    return (counter);
}
