#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Print lower and upper alphabet on the same line
 */
int main(void)
{
int c;

for (c = 0; c < 26; ++c)
putchar('a' + c);
for (c = 0; c < 26; ++c)
putchar('A' + c);

putchar('\n');

return (0);
}
