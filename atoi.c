#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input);

int main(void)
{
    string input = get_string("Enter a positive integer: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    // Convert string to int
    printf("%i\n", convert(input));
}

int convert(string input)
{
    // get the length of the string
    int len = strlen(input);
    len--;

    // base case
    if (input[len] == '\0')
    {
        return 0;
    }

    // get the last char and convert it to integer
    int num = input[len] - '0';

    // shortning the string removing the last char
    input[len] = '\0';

    // recursion
    return convert(input) * 10 + num;


}