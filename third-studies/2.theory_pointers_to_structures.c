/* Pointing pointers to structures. */

struct part
{
    int number;
    char name[10];
};

struct part *p_part; /* This is analogous to char *p_part or int *p_part */

/* You can't initialize the pointer yet since you haven't declared any instance
   of type struct part. So, let's do that right now. */

/* Declaring an instance: */
struct part gizmo;

/* Initializing an instance: */
p_part = &gizmo;

/* Assigning a number to a variable from gizmo: */
/* 1st way: */
(*p_part).number = 100;

/* A different way of doing the same thing is: */
/* '->' is the indirect membership operator. */
/* 2nd way: */
p_part -> number

/* 3rd way: */
gizmo.number;
