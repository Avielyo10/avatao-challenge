#include <string.h>
#include <stdio.h>

int main(){
    char buff[24];
    int authorized = 0;
    printf("Can you get the flag?\n");
    scanf("%s",buff);
    if (authorized){
        printf ("Your flag is: b@$ic!nteger0verfl0w\n");
    }
    else{
        printf("Maybe not ..\n");
    }
    return 0;
}