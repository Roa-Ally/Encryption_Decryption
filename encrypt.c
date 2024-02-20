#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

char* encrypt(char* plain_text, int* keys, int key_length){
    int rows = (int)ceil((double)strlen(plain_text) / key_length);
    int cols = key_length;
    int text_length = strlen(plain_text);
    int k = 0;
    char* str = NULL;


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

            printf("%c ",encrypted_string[i][j]);
        }
        printf("%s","\n");

    }


    int count = 1;

       /* while (!0) {
            for (int j = 0; j < cols; j++) {
                for (int i = 0; i < rows; i++) {
                if (keys[j] == count) {
                    printf("%c", encrypted_string[i][keys[j]]);
                } else
                    break;

            }
                if (keys[j] == count)
                    count++;
        }

    }*/
    /*for (int j = 0; j < cols +2; j++) {
        while(count < key_length) {
            for (int i = 0; i < rows; i++) {
                if (keys[j] == count) {
                    printf("%c", encrypted_string[i][keys[j]-1]);

                }else
                continue;

            }
            if(keys[j] != count){
                j++;
            } else
                break;

        }
        count ++;

    }*/


}