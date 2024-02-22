#include <stdio.h>
#include "main.h"

char* decrypt(char* cipher_text, int* key, int key_length) {
    int cipher_text_len;
    int rows = (int)ceil((double) strlen(cipher_text) / key_length);
    int cols = key_length;
    cipher_text_len = strlen(cipher_text);
    char **decrypted_string = malloc(sizeof(char *) * rows);
    for (int i = 0; i < rows; i++) { decrypted_string[i] = malloc(sizeof(char*) * cols); }

    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            int mul = ((key[j] - 1) * rows) + i;
            char c = cipher_text[mul];
            if (mul < cipher_text_len && c) {
                decrypted_string[i][j] = c;
            }
           // printf("%c ", decrypted_string[i][j]);

        }
      // printf("\n");
    }

//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            if(decrypted_string[i][j])
//                printf("%c ", decrypted_string[i][j]);
//        }
//        printf("\n");
//    }
    printf("\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%c", decrypted_string[i][j]);
        }
    }
    printf("\n");
return 0;
}