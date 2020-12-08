#include "morse.h"
 
int main(int argc, char *argv[]) {
    if (argc == 2) {
       
        char *morse_symbols[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..",
        ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-",
        ".--", "-..-", "-.--", "--..", ".....", "77777", NULL};
        char *alphabet[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", 
        "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", ".", " ", NULL};
        char *message = argv[1];
        char separ = ' ';

        for (int i = 0; i < mx_strlen(message); i++) {
            if (message[i] == separ && message[i + 1] == separ) {
                message[i + 1] = '7';
            }
            if(message[i] == '7' && message[i + 1] == separ && message[i + 2] == separ) {
                message[i + 1] = '7';
            }
              if(message[i] == '\n') {
                message[i] = ' ';
            }
        }

        char **output = mx_strsplit(message, separ);
        int len = 0;
        while (morse_symbols[len] != NULL) { 
            len++;
        }
        for (int i = 0; i < mx_count_words(message, separ); i++) {
            for (int j = 0; j < len; j++) {
                if (mx_strcmp(morse_symbols[j], output[i]) == 0) {
                    mx_printchar(alphabet[j][0]);
                }
            }
        }
        mx_printchar('\n');
    }
    else {
        mx_printerr("usage: ./morse \"str\"\n");
    }
    // system ("leaks -q morse");
    exit(0);
}

