#include <stdio.h>
#include "main.h"
#define MAX_LEN 100
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

    if(argc <= 3)
    {
        error(99, "clatest: Fatal Error! Not enough command line arguments.");
    }
    char string_encrypt[MAX_LEN + 1];
    char string_decrypt[MAX_LEN + 1];
    int* key  = (int*)calloc(atoi(argv[1]), sizeof(int) );
    if(argc > 29)
        error(1, "clatest: Fatal Error! To many command line arguments!");
    if(!check_integer(argv[1]))
        error(2, "clatest: Fatal Error! command-line argument must be an integer!");
    for (int i = 1; i < atoi(argv[1]) + 2 ; i++) {
        if(!check_integer(argv[i])){
            error(2, "clatest: Fatal Error! command-line argument must be an integer!");
        }
    }
    // printf("This program prints the ClA as in integer: ");
    for (int i = 2; i < atoi(argv[1]) + 2; ++i) {
        key[i - 2]= atoi(argv[i]);
        printf("%d", atoi(argv[i]));
    }
    if(!is_valid_key(atoi(argv[1]),key)){
        error(3,"\nFatal Error! Key is not valid \n");
    }

    while(TRUE) {
        printf("\nPlease enter your command: \n");
        for (int i = 0; i < MAX_LEN; i++) {
            char c = getchar();
            if (!isalpha(c) && c != '\n') {
                i--;
                continue;
            }
            string_encrypt[i] = c;
            string_encrypt[i] = tolower(string_encrypt[i]);
            if (string_encrypt[i] == '\n') {//end of user's input
                string_encrypt[i] = '\0';//string terminator
                break;
            }
        }
        char *sub_encrypt = &string_encrypt[7];
//    for (int i = 0; i < strlen(sub_encrypt); ++i) {
//       // printf("%c\n",sub_encrypt[i]);
//    }
//    encrypt(sub_encrypt,key,atoi(argv[1]));
//    printf("\nPlease enter your decryption: \n");
//    for (int i = 0; i < MAX_LEN; i++) {
//        char c = getchar();
//        if(!isalpha(c) && c != '\n') {
//            i--;
//            continue;
//        }
//        string_decrypt[i] = c;
//        if (string_decrypt[i] == '\n') {//end of user's input
//            string_decrypt[i] = '\0';//string terminator
//            break;
//        }
//    }
        //char *sub_decrypt;  = &string_decrypt[7];

        char is_valid_1[] = "encrypt";
        char is_valid_2[] = "decrypt";
        char end[] = "quit";

        if (strstr(string_encrypt, is_valid_1) != NULL) {
            encrypt(sub_encrypt, key, atoi(argv[1]));
        }
        if (strstr(string_encrypt, is_valid_2) != NULL) {
            char *sub_decrypt = NULL;
            sub_decrypt = sub_encrypt;
            decrypt(sub_decrypt, key, atoi(argv[1]));
        }
        if(strstr(string_encrypt,end)!= NULL){
            return FALSE;
        }
    }
    return 0;
}