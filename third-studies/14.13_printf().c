/* Demonstration of printf(). */

#include <stdio.h>

void clear_kb(void);

char *m1 = "Binary";
char *m2 = "Decimal";
char *m3 = "Octal";
char *m4 = "Hexadecimal";

int main()
{
    float d1 = 10000.123;
    int n, f;

    puts("Outputting a number with different field widths.\n");

    printf("%5f\n", d1);
    printf("%10f\n", d1);
    printf("%15f\n", d1);
    printf("%20f\n", d1);
    printf("%25f\n", d1);

    puts("\n Press Enter to continue...");
    clear_kb();
    getchar();

    puts("\nUse the * field width specifier to obtain field width.");
    puts("from a variable in the argument list. \n");

    for (n = 5; n <= 25; n += 5)
    {
        printf("%*f\n", n, d1);
    }

    puts("\n Press Enter to continue...");
    clear_kb();
    getchar();

    puts("\nInclude leading zeros.\n");

    printf("%05f\n", d1);
    printf("%010f\n", d1);
    printf("%015f\n", d1);
    printf("%020f\n", d1);
    printf("%025f\n", d1);

    puts("\n Press Enter to continue...");
    clear_kb();
    getchar();

    puts("\nDisplay in octal, decimal, and hexadecimal.");
    puts("\nUse # to precede octal and hex output with 0 and 0X.");
    puts("\nUse - to left - justify each value in its field.");
    puts("\nFirst display column labels.\n");

    printf("%-15s%-15s%-15s", m2, m3, m4);

    // for (n = 1; n < 20; n++)
    // {
    //     printf("\n%-15d%-#15%-#15X", n, n, n);
    // }

    puts("\n Press Enter to continue...");
    clear_kb();
    getchar();

    puts("\n\nUse the %n conversion command to count characters.\n");

    printf("%s%s%s%s%n", m1, m2, m3, m4, &n);

    printf("\n\nThe last printf() output %d characters.\n", n);

    return 0;
}


void clear_kb(void)
{
    char junk[80];
    gets(junk);
}
