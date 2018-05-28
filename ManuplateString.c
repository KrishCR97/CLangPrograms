#include <stdio.h>

int main()
{
char str[] = "is phani kumar is good";
char strToAppend[] = "Yes";
int resStrLength = 30;
char* resStr = (char *) malloc(resStrLength * sizeof(char));
int resStrIndex = 0;
for(int index = 0; index<resStrLength; index++){
    for(int counter = 0 ; strToAppend[counter] != '\0';counter++){
        resStr[counter] = strToAppend[counter];
        index++;
        resStrIndex++;
    }
    for(int counter = 2; str[counter]!= '\0';counter++){
        resStr[resStrIndex] = str[counter];
        index++;
        resStrIndex++;
    }
}
resStr[resStrIndex] = '\0';
printf(resStr);
    return 0;
}
