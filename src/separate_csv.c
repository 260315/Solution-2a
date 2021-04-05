#include "csv.h"
#include<stdio.h>
#include <string.h>

void Comma_separate_Value(char* name)
{
    FILE* fptr = fopen(name,"r");
    if(!fptr) {
        printf("Not able to open file \n");
    }
    else {
        char buffer[4096];
        int row = 0;
        int col = 0;

        while (fgets(buffer, 4096, fptr)){
            col = 0;
            row++;

            if (row == 1)
                continue;

            char* result = strtok(buffer,", ");

            while(result) {
                if (col == 0) {
                    printf("\n\nName : ");
                }

                if (col == 1) {
                    printf("\nEmail : ");
                }
    
                if (col == 2) {
                    printf("\nGithub_User_Link : ");
                }

                printf("%s", result);
                result = strtok(NULL, ", ");
                col++;
            }  

            printf("\n");  
        }
        fclose(fptr);
    }

}