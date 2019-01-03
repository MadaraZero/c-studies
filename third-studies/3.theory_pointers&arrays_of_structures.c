/* Struct */
struct part
{
    int number;
    char name[10];
};

/* Instance */
struct part data[100];

/* Pointer declaration to type part */
struct part *p_part;
p_part = &data[0]; /* or p_part = data; since the name of an array is a pointer */
                   /* to the first element of the array. */

printf("%d %s", p_part -> number, p_part -> name);
