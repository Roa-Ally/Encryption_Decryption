
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "encrypt.c"
#define MAX_LEN 100
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
    char string_encrypt[MAX_LEN + 1];
    char *token;
    int size = 0;
    int* key  = (int*)calloc(atoi(argv[1]), sizeof(int) );
    /*if(argc != 2)
        error(NOT_ENOUGH_CLAS, "clatest: Fatal Error! Program needs at-least three CLA!");*/
    if(!check_integer(argv[1]))
        error(2, "clatest: Fatal Error! command-line argument must be an integer!");
    for (int i = 1; i < atoi(argv[1]) + 2 ; i++) {
        if(!check_integer(argv[i])){
            error(2, "clatest: Fatal Error! command-line argument must be an integer!");
        }
    }

    printf("This program prints the ClA as in integer: ");
    for (int i = 2; i < atoi(argv[1]) + 2; ++i) {
        key[i]= atoi(argv[i]);
        printf("%d", atoi(argv[i]));
    }
    /*if(!is_valid_key(atoi(argv[1]),data)){
        error(3,"\nFatal Error! Key is not valid \n");
    }*/
    const char delimiters[] = " ,./:;'\t\n";


    printf("\nPlease enter your encryption: ");
    for (int i = 0; i < MAX_LEN; i++) {
        string_encrypt[i] = getchar();
        string_encrypt[i] = tolower(string_encrypt[i]);
        if (string_encrypt[i] == '\n') {//end of user's input
            string_encrypt[i] = '\0';//string terminator
            break;
        }else
            size ++;

    }


    token = strtok( string_encrypt, delimiters);
    while( token != NULL ) {
        printf( " %s\n", token );

        token = strtok(NULL, delimiters);
    }

    char* sub_encrypt = &string_encrypt[7];
    for (int i = 0; i < size; ++i) {
        printf("%c",sub_encrypt[i]);

    }

    encrypt(sub_encrypt,key);
    return 0;
}