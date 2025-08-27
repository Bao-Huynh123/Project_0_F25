#include <stdio.h>
#include <stdlib.h>
//Generate a radom string of characters using ASCII value
void rand_string(char *s, size_t size)
{
    for (size_t i = 0; i < size; i++){
        s[i] = 'a' + rand() % 26;
    }
    s[size] = '\0';
}

