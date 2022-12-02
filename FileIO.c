#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE* ptr;
    char ch;

    //Open file
    ptr = fopen("test.txt", "r");

    if(NULL == ptr){
        printf("Error!");
    }

    do{
        ch = fgetc(ptr);
        printf("%c", ch);
    } while (ch != EOF);

    //Close file
    fclose(ptr);
    return 0;
}