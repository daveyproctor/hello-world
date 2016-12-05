#include <stdio.h>
#include <cs50.h>
int main(void)
{
    string s = get_string();
    printf("Hello, %s\n", s);
    printf("and the universe\n");
    return 0;
}