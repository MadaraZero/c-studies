/* Exercise 7 */

#include <stdio.h>

int main()
{
    struct contact_info
    {
        char address1[20];
        char address2[20];
        char city[20];
        char state[20];
        char zip[7];
    };

    typedef struct
    {
        struct contact_info entry_1;
    } RECORD;

    RECORD myaddress;

    puts("\nEnter your address: ");
    scanf("%s", myaddress.entry_1.address1);

    puts("Enter your city: ");
    scanf("%s", myaddress.entry_1.city);

    puts("Enter your state: ");
    scanf("%s", myaddress.entry_1.state);

    puts("Enter your zip: ");
    scanf("%s", myaddress.entry_1.zip);

    puts("================================");
    printf("address\t| = %s\n", myaddress.entry_1.address1);
    printf("city\t| = %s\n", myaddress.entry_1.city);
    printf("state\t| = %s\n", myaddress.entry_1.state);
    printf("zip\t| = %s\n", myaddress.entry_1.zip);
    puts("================================");

    return 0;
}
