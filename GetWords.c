#include <stdio.h>
int main()
{
char* str = "2ab3abc4abcd";
int counter = 0;
int lengthOfString = (int)strlen(str);
while(counter < lengthOfString){
if(isdigit(str[counter])){
        int innerCount = str[counter] - '0';
        while(innerCount > 0){
         counter = counter+ 1;
         printf("%c",str[counter]);
         innerCount--;
}
printf("\n");
}
counter++;
}
return 0;
}