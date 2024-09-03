#include <stdio.h>
#include <stdlib.h>
/// @brief
/// @param
int main(void)
{
    int number = 1;
    int count = 10;
    char symbol = 'A';
    for (int i = 0; i < count; i++)
    {
        printf("%d %c\n", number++, symbol);
    }
    puts("finish loop");
    //return EXIT_SUCCESS;
}
