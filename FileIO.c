#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE* ptr;
    int highscore[1];
    int num;
    int new_highscore;

    printf("Input highscore: ");
    scanf("%d", &new_highscore);

    //Open file for reading
    ptr = fopen("test.txt", "r");
    int i = 0;
    while(fscanf(ptr,"%d", &num) > 0){
        highscore[i] = num;
        i++;
    }
    //Close file
    fclose(ptr);

    //if new score is higher than previous highscore
    if (new_highscore > highscore[0]){
        ptr = fopen("test.txt", "w");       //open file for writing
        fprintf(ptr,"%d",new_highscore);    //write the file with new highscore
        fclose(ptr);                        //Close file
    }

    return 0;
}