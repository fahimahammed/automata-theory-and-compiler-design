#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>

bool isVowel(char ch)
{
    ch = tolower(ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        return true;
    }
    else return false;
}


void printArray(char arr[][100], int n)
{
    for(int i=0; i<n; i++){
        printf("\t%s \n", arr[i]);
    }
}

void main()
{
    char str[100] = "Munmun is the student of Computer Science & Engineering";
    char vowelArray[20][100], conArray[20][100];
    int vowel=0, consonet=0;

    char *token = strtok(str, " ");

    while(token != NULL){

        if(isalpha(token[0]) && (isVowel(token[0]))){
            strcpy(vowelArray[vowel], token);
            vowel++;
        }
        else if(isalpha(token[0]) && !(isVowel(token[0]))){
            strcpy(conArray[consonet], token);
            consonet++;
        }
        token = strtok(NULL, " ");
    }
    printf("Word start with vowel: \n");
    printArray(vowelArray, vowel);

    printf("\n\nWord Start with consonant: \n");
    printArray(conArray, consonet);

    printf("\n");
}
