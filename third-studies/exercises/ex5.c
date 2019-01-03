#include <stdio.h>

int check_for_even(int *list);
int print_array_elements(int *list) ;


int main()
{
    int int_val, int_array[5], check_it=0, n=0, exit_loop=0;

    do
    {
        puts("Enter an even integer: ");

        scanf("%d", &int_val);

        printf("your integer = %d\n", int_val);
        printf("adding %d to array[%d]\n", int_val, n);
        int_array[n] = int_val;
        n++;

        if (int_val == 99) {
            exit_loop = 88;
        }

        if (n == 6) {
            check_it = check_for_even(&int_array[0]);
            n = 0;

            if (check_it == 1) {
                exit_loop = 88;
            }
        }

    }while (exit_loop != 88); /* 88 is an arbitrary number. */

    puts("done");
    print_array_elements(&int_array[0]);
    return 0;
}


int check_for_even(int *list)
{
    int i, size;
    for(i = 0; i < 6;)
    {
        if ((list[i] % 2) == 0) {
            i++;
        }

        else {
            //puts("Zero");
            return 0;
        }
    }

    if (i == 6) {
        //puts("One");
        return 1;
    }
}


int print_array_elements(int *list)
{
    int i;
    for (i = 0; i < 6; i++) {
        printf("\tindex[%d] = %d\n", i, list[i]);
    }
}
