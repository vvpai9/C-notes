#include <stdio.h>

struct details
{
    int ID;
    char name[20], ph[12];
};

struct details x;

void add (FILE *ptr)
{
    char filename[20];
    printf("\nEnter file name: ");
    scanf ("%s", &filename);
    ptr = fopen ("filename", "w");
    printf ("Enter details:\n");
    scanf ("%d", &x.ID);
    gets (x.name);
    scanf ("%s", &x.ph);
    fprintf (ptr, "%d", x.ID);
    fputs(x.name, ptr);
    fprintf  ("%s", x.ph);
    fclose (ptr);
}

void display (FILE *ptr)
{
    char filename[20];
    printf("\nEnter file name: ");
    gets(filename);
    ptr = fopen ("filename", "r");
    while (!feof(ptr))
    {
        fscanf (ptr, "%d %s %s", &x.ID, x.name, x.ph);
        printf ("\n%d\t%s\t%s\n", x.ID, x.name, x.ph);
    }
    fclose (ptr);
}

void update (FILE *ptr)
{
    char filename[20];
    printf("\nEnter file name: ");
    gets(filename);
    ptr = fopen ("filename", "a");
    printf ("Enter details:\n");
    scanf ("%d", &x.ID);
    gets (x.name);
    gets (x.ph);
    fprintf (ptr, "%d", x.ID);
    fputs(x.name, ptr);
    fputs (x.ph, ptr);
    fclose (ptr);
}

void del (FILE *ptr1, int ID)
{
    char filename[20];
    int count = 0;
    FILE *ptr2;
    printf("\nEnter file name: ");
    gets(filename);
    ptr1 = fopen ("filename", "r");
    ptr2 = fopen ("temp.txt", "w");
    while (!feof (ptr1))
    {
        fscanf (ptr1, "%d %s %s", &x.ID, x.name, x.ph);
        if (ID != x.ID)
        {
            fprintf (ptr2, "%d %s %s", x.ID, x.name, x.ph);
        }
        else
        {
            count = 1;
        }
    }
    if (count == 0)
    {
        printf ("\nData not found\n");
    }
    else
    {
        rename ("temp.txt", "filename");
        remove (ptr1);
    }
    fclose (ptr1);
    fclose (ptr2);
}

void modify (FILE *ptr1, int ID)
{
    char filename[20];
    FILE *ptr2;
    printf("\nEnter file name: ");
    gets(filename);
    ptr1 = fopen ("filename", "r");
    ptr2 = fopen ("temp.txt", "w");
    while (!feof (ptr1))
    {
        fscanf (ptr1, "%d %s %s", &x.ID, x.name, x.ph);
        if (ID == x.ID)
        {
            printf ("Enter new details:\n");
            scanf ("%d", x.ID);
            gets (x.name);
            gets (x.ph);
            fprintf (ptr2, "%d %s %s", x.ID, x.name, x.ph);
        }
        else
        {
            fprintf (ptr2, "%d %s %s", x.ID, x.name, x.ph);
        }
    }
    rename ("temp.txt", "filename");
    remove (ptr1);
    fclose (ptr1);
    fclose (ptr2);
}

int main()
{
    int choice, ID;
    FILE *ptr;
    do
    {
        printf("1 -> Add an entry\n2 -> Display all entries\n3 -> Update an entry\n4 -> Delete an entry\n5 -> Edit an entry\n6 -> Exit\n\nEnter a choice: ");
        scanf ("%d", &choice);
        switch (choice)
        {
            case 1 : add (ptr);
                    break;

            case 2 : display (ptr);
                    break;

            case 3 : update (ptr);
                    break;

            case 4 : printf ("\nEnter ID to be deleted: ");
                    scanf ("%d", &ID);
                    del (ptr, ID);
                    break;

            case 5 : printf ("\nEnter ID to be edited: ");
                    scanf ("%d", &ID);
                    modify (ptr, ID);
                    break;

            case 6 : break;

            default : printf ("\nInvalid choice\n");
        }
        getchar();
    }while (choice != 6);
    return 0;
}

