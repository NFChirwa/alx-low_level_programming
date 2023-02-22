#include <unistd.h>
/**
 * main -  a program that prints _putchar, followed by a new line
 *return: Always (0)  
*/
int _putchar(char c)
{

        return (write(1, &c, 1));
}
