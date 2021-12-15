#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
    char str[100] = "Md. Tareq Zaman, Part-3, 2011";
    int wordCount = 0, latterCount = 0, digitCount = 0, otherCount = 0;

    char *token = strtok(str, " ");

    while( token != NULL){
        wordCount++;
        for(int i=0; i<strlen(token); i++){

            if(isalpha(token[i])){
                latterCount++;
            }
            else if(isdigit(token[i])){
                digitCount++;
            }
            else{
                otherCount++;
            }
        }
        token = strtok(NULL, " ");
    }
    printf("Total Word: %d\n", wordCount);
    printf("Total latter: %d\n", latterCount);
    printf("Total Digit: %d\n", digitCount);
    printf("Total Symbol: %d\n", otherCount);
}
