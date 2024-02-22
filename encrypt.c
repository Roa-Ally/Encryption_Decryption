#include <stdio.h>
#include "main.h"

char* encrypt(char* plain_text, int* key, int key_length){
    int rows = (int)ceil((double)strlen(plain_text) / key_length);
    int cols = key_length;
    int text_length = strlen(plain_text);
    int k = 0;
    int rev_key[cols];
    char** encrypted_string = malloc(sizeof(char*) * rows);
  for(int i = 0; i < rows; i++) { encrypted_string[i] = malloc(sizeof(char) * cols); }
    for(int i = 0; i < rows; i++){
        for (int j = 0; j < key_length; j++) {
            if(k < text_length) {
                encrypted_string[i][j] = plain_text[k++];
            } else {
                for (int l = 0; l < (key_length - j); l++) {
                    encrypted_string[i][j] = 'z' - l;
                }
            }
           // printf("%c ",encrypted_string[i][j]);
        }
        // printf("%s","\n");
    }
    for (int j = 0; j < cols; j++) {
        rev_key[key[j]-1] = j;
    }
//    for(int i=0; i<sizeof(rev_key)/sizeof(rev_key[0]); i++){
//        printf("%d ", rev_key[i]);
//    }
    printf("\n");
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows ; i++) {
            putchar(toupper(encrypted_string[i][rev_key[j]]));
        }
    }
    printf("\n");
    return 0;
}