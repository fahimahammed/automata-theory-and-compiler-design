#include<stdio.h>
#include<string.h>
#include<ctype.h>

void printArray(char arr[], int n)
{
    for(int i=0; i<n; i++){
        printf("%c ", arr[i]);
    }
}

void main()
{
    char str[100] = "Md. Tareq Zaman, Part-3, 2011";
    char latter[100], digit[100], symbol[100];
    int p=0, q=0, r=0;

    char *token = strtok(str, " ");

    while( token != NULL){

        for(int i=0; i<strlen(token); i++){

            if(isalpha(token[i])){
                latter[p] = token[i];
                p++;
            }
            else if(isdigit(token[i])){
                digit[q] = token[i];
                q++;
            }
            else{
                symbol[r] = token[i];
                r++;
            }
        }
        token = strtok(NULL, " ");
    }


    printf("Latter(s) : ");
    printArray(latter, p);
    printf("\nDigit(s) : ");
    printArray(digit, q);
    printf("\nSymbol(s) : ");
    printArray(symbol, r);
    printf("\n");
}

