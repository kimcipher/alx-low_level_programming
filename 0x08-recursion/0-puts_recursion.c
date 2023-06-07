#include <stdio.h>
#include <stdlib.h>
void _putchar(char c)
{
    putchar(c);
}
void _puts_recursion(char *s)
{
    if (*s)
    {
        _putchar(*s);
        _puts_recursion(s + 1);
    }
    _putchar('\n');
}
int main()
{
    _puts_recursion("Puts with recursion");
    return (0);
}