#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#define NOT_ENOUGH_CLAS 1
#define NOT_AN_INT 2
#define TRUE 1
#define FALSE 0
#define error(code,message) do{fprintf(stderr, "%s\n", message);return code;}while(0)

int check_integer(char* str){
    if(strlen(str) == 0)
        return FALSE ;
    if(str[0] == '-' || str[0] == '+')
        str++;//skip it
    while(*str)
        if(!isdigit(*(str++)))
            return FALSE;
    return TRUE;
}
int is_valid_key(int m, int* key){
    int visited[m+1];
    for (int i = 1; i <= m; ++i) {
        visited[i] = FALSE;

    }
    for (int i = 0; i < m; i++) {
        if(key[i]<1 || key[i] > m)
            return FALSE;
        if(visited[key[i]])
            return FALSE;
        else
            visited[key[i]] = TRUE;
    }
    return TRUE;
}
int main(int argc, char* argv[]) {
    if(argc != 3)
        error(NOT_ENOUGH_CLAS, "clatest: Fatal Error! Program needs at-leat three CLA!");
    if(!check_integer(argv[1]))
        error(2, "clatest:Fatal Error! first command-line argument must be an integer!");
    if(!check_integer(argv[2]))
        error(3, "clatest:Fatal Error! second command-line argument must be an integer!");
    printf("This program prints the first ClA as in integer: %d.\n", atoi(argv[2]));
    if(!check_integer(argv[3]))
        error(4, "clatest:Fatal Error! second command-line argument must be an integer!");
    printf("This program prints the first ClA as in integer: %d.\n", atoi(argv[3]));
    return 0;
}