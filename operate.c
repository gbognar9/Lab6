/*
 * =====================================================================================
 *
 *       Filename:  operate.c
 *
 *    Description:
 *
 *
 *         Author:   (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	char compare, *file1, *file2, *file3 = NULL;
	char line1[1000];
	char line2[1000];

    if (argc =! 5) {
        printf("Incorrect number of arguments");
        exit(EXIT_FAILURE);
    }

	compare = argv[1];
	file1 = argv[2];
	file2 = argv[3];
	file3 = argv[4];

	FILE* fp1 = fopen(file1, "r");
	FILE* fp2 = fopen(file2, "r");
	FILE* fpW = fopen(file3, "w");

	if (compare == '+') {
        while(fgets(line1, 1000, file1) != NULL) {fputs(line1, file3);}

        while(fgets(line2, 1000, file2) != NULL) {fputs(line2, file3);}

	} else if (compare == '-') {
	    int count = 0;
        while(fgets(line1, 1000, file1) != NULL)

            {fgets(line2, 1000, file2);

            if (line1 =! line2) {fputs(count, file3);}
            else {count++;}
        }

	} else {
        printf("Invalid input: arg1 must be + or -");
        exit(EXIT_FAILURE);
	}

    return 0;
}

