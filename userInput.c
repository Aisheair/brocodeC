#include <stdio.h>
#include <string.h>
int main(){
    
    char name[25]; //bytes
    int age;

    printf("\nwhats your name?");
    //scanf("%s", &name);
    fgets(name, 25, stdin);    //white space
    name[strlen(name)-1] = '\0';// remove "\n" 

    printf("\nhow old are you?");
    scanf("%d", &age);

    printf("\nhello %s how are you?", name);
    printf("\nyou are %d years old", age);

    return 0;
}