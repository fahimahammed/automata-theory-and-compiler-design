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

bool checkRepeat(char arr[], char ch, int n){
    for(int i=0; i<n; i++){
        if(tolower(arr[i]) == tolower(ch)){
            return false;
        }
    }
    return true;
}

void printArray(char arr[], int n)
{
    for(int i=0; i<n; i++){
        printf(" %c ", arr[i]);
    }
}

void main()
{
    char str[100] = "Munmun is the student of Computer Science & Engineering";
    char vowelArray[100], conArray[100];
    int vowel=0, consonet=0, check=0;
    for(int i=0; i<strlen(str); i++){
        if(isVowel(str[i]) && (checkRepeat(vowelArray, str[i], vowel))){
            vowelArray[vowel] = str[i];
            vowel++;
        }
        else if(!isVowel(str[i]) && isalpha(str[i]) && (checkRepeat(conArray, str[i], consonet))){
            conArray[consonet] = str[i];
            consonet++;
        }
    }
    printf("Vowels: ");
    printArray(vowelArray, vowel);
    printf("\n\nConsonents: ");
    printArray(conArray, consonet);
    printf("\n");
}
