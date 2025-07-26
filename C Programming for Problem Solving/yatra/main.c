#include <stdio.h>

int main()
{
    char yatra, package;
    int n = 0, amt = 0;
    printf("K -> Karnataka Special\nM -> Manasarovar Yatra\nV -> Vaishnodevi Economy\nG -> Gujarat Rann Utsav\n\nEnter type of Yatra: ");
    yatra = getchar ();
    fflush(stdin);
    if (yatra == 'K' || yatra == 'k' || yatra == 'm' || yatra == 'M' || yatra == 'V' || yatra == 'v' || yatra == 'G' || yatra == 'g')
    {
        printf ("\nP -> Premium\nC -> Classic\nB -> Basic\n\nEnter type of package: ");
        package = getchar ();
        fflush (stdin);
        if (package == 'P' || package == 'p' || package == 'c' || package == 'C' || package == 'B' || package == 'b')
        {
            printf ("\nEnter number of customers: ");
            scanf ("%d", &n);
        }
    }
    switch (yatra)
    {
        case 'k' :

        case 'K' : switch (package)
                    {
                        case 'p' :

                        case 'P' : amt = 10000 * n;
                                    break;

                        case 'c' :

                        case 'C' : amt = 8000 * n;
                                    break;

                        case 'b' :

                        case 'B' : amt = 5000 * n;
                                    break;

                        default : printf ("\nInvalid type of package\n");
                    }
                    break;

        case 'm' :

        case 'M' :

        case 'v' :

        case 'V' : switch (package)
                    {
                        case 'p' :

                        case 'P' : amt = 20000 * n;
                                    break;

                        case 'c' :

                        case 'C' : amt = 15000 * n;
                                    break;

                        case 'b' :

                        case 'B' : amt = 10000 * n;
                                    break;

                        default : printf ("\nInvalid type of package\n");
                    }
                    break;

        case 'g' :

        case 'G' : switch (package)
                    {
                        case 'p' :

                        case 'P' : amt = 25000 * n;
                                    break;

                        case 'c' :

                        case 'C' : amt = 10000 * n;
                                    break;

                        case 'b' :

                        case 'B' : amt = 7000 * n;
                                    break;

                        default : printf ("\nInvalid type of package\n");
                    }
                    break;

        default : printf ("\nInvalid type of yatra\n");
    }
    printf ("\nTotal package amount: Rs. %d\n", amt);
    return 0;
}
