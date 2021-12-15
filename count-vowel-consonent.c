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

void main()
{
    char str[100] = "Munmun is the student of Computer Science & Engineering";
    int vowel=0, consonet=0;
    for(int i=0; i<strlen(str); i++){
        if(isVowel(str[i])){
            vowel++;
        }
        else if(!isVowel(str[i])){
            consonet++;
        }
    }
    printf("Vowel: %d\nConsonent: %d\n", vowel, consonet);
}
