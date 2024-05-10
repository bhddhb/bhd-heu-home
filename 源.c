#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]) {
    char a, b;
    a = getchar();
    b = getchar();

    if ((int)a - 48 != 1)
    {

        switch ((int)a - 48)
        {

        case 2:
            printf("twenty");
            break;
        case 3:
            printf("thirty");
            break;
        case 4:
            printf("forty");
            break;
        case 5:
            printf("fifty");
            break;
        case 6:
            printf("sixty");
            break;
        case 7:
            printf("seventy");
            break;
        case 8:
            printf("eighty");
            break;
        case 9:
            printf("ninety");
            break;
        }



        switch ((int)b - 48)
        {
        case 0:
            printf(" ");
            break;
        case 1:
            printf("-one");
            break;
        case 2:
            printf("-two");
            break;
        case 3:
            printf("-three");
            break;
        case 4:
            printf("-four");
            break;
        case 5:
            printf("-five");
            break;
        case 6:
            printf("-six");
            break;
        case 7:
            printf("-seven");
            break;
        case 8:
            printf("-eight");
            break;
        case 9:
            printf("-nine");
            break;
        }
    }
    else
    {
        int c = ((int)a - 48) * 10 + (int)b - 48;
        switch (c)
        {
        case 10: 
        	printf("ten\n");
        	break;
        case 11:
            printf("eleven\n");
            break;
        case 12:
            printf("twelve\n");
            break;
        case 13:
            printf("thirteen");
            break;
        case 14:
            printf("fourteen");
            break;
        case 15:
            printf("fifteen");
            break;
        case 16:
            printf("sixteen");
            break;
        case 17:
            printf("seventeen");
            break;
        case 18:
            printf("eighteen");
            break;
        case 19:
            printf("nineteen");
            break;
        }
    }
    return 0;
}

