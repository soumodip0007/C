#include<stdio.h>
#include<string.h>

int main() {

    //strlen
    char name[] = "Mario";
    printf("Length is : %d\n", strlen(name));
    
    //strcpy
    char strOne[] = "Luigi";
    char strTwo[] = "Shaun";
    strcpy(strTwo, strOne);
    puts(strTwo);

    //strcat
    char firstString[] = "Hello ";
    char secondString[] = "World";
    puts(strcat(firstString, secondString));

    //strcmp
    char firstStr[] = "Goku";
    char secondStr[] = "Vegeta";
    printf("%d\n", strcmp(firstStr, secondStr));
    printf("%d\n", strcmp(secondStr, firstStr));
    
    return 0;
}
