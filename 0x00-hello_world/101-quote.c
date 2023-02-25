#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
const int len = sizeof(msg) - 1;
const ssize_t ret = write(STDERR_FILENO, msg, len);
return (ret != len);
}
