#include <stdio.h>

int main()
{
char *str = "HHHHH8601851820908777htgvvv";
int validNumberCount = 10;
int counter = 0;

while(str[counter] != '\0' && validNumberCount > 0){
    if(isdigit(str[counter])){
        printf("%c",str[counter]);
        validNumberCount--;
    }
    counter++;
}
    return 0;
}
