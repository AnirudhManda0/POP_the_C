#include <stdio.h>
int main()
{
    int x = 376;
    printf("%d\n", x);  // 376    decimal
    printf("%o\n", x);  // 570    octal
    printf("%x\n", x);  // 178    hex (lowercase)
    printf("%X\n", x);  // 178    hex (uppercase)
    printf("%#o\n", x); // 0570   octal with the 0 prefix
    printf("%#x\n", x); // 0x178  hex with the 0x prefix
}