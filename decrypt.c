char* decrypt(char* cipher_text, int* key, int key_length) {
    int cipher_text_len;
    int rows = (int) ceil((double) strlen(cipher_text) / key_length);
    int cols = key_length;
    int rev_key[cols];
    int k = 0;
    cipher_text_len = strlen(cipher_text);
    char **decrypted_string = malloc(sizeof(char *) * rows);
    for (int i = 0; i < rows; i++) { decrypted_string[i] = malloc(sizeof(char) * cols); }

    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            if (k < cipher_text_len) {
                decrypted_string[i][j] = cipher_text[k++];
            }
            printf("%c ", decrypted_string[i][j]);

        }
        printf("\n");
    }

//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            if (k < cipher_text_len) {
//                decrypted_string[i][j] = cipher_text[k++];
//            }
//            printf("%c ", decrypted_string[i][j]);
//
//        }
//        printf("\n");
//    }


  for (int j = 0; j < cols; j++) {
        rev_key[key[j]-2] = j;
    }
   for(int i=0; i<sizeof(rev_key)/sizeof(rev_key[0]); i++){
        printf("%d ", rev_key[i]);
   }
   printf("\n");

    for (int j = 0; j < rows; j++) {
        for (int i = 0; i < cols; i++) {
            putchar((decrypted_string[rev_key[i]][j]));
        }
        printf("\n");
    }

}