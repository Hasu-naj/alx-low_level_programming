#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: string
 *
 * Return: n
 */
int _atoi(char *s)
{
        int n = 0;
        int minus = 1;
        int i = 0;

        while (s[i] != '\0')
        {
                if (s[i] == '-')
                {
                        minus = -1;
                }
                if (s[i] >= 48 && s[i] <= 57)
                {
                        n = n * 10 + (s[i] - 48);
                }
                i++;
        }
        n = n * minus;
        return (n);
}
