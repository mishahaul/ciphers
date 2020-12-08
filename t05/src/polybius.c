#include "mxlib.h"

int main (int argc, char **argv) {
    if (argc == 2) {
        char polybius[6][6] =  {{"ABCDEF"}, 
                                {"GHIJKL"}, 
                                {"MNOPQR"}, 
                                {"STUVWX"}, 
                                {"YZ0123"}, 
                                {"456789"}};
        char *message = argv[1];
        int len = 0;

        for (int i = 0; i < mx_strlen(message); i++) {
            if (mx_isalpha(message[i])) {
                len++;
            }
        }
        int coor[len];
        char message_str[len/2];

        for (int i = 0, j = 0; i < mx_strlen(message); i++, j++) {
            if (mx_isalpha(message[i])) {
                if (message[i] == 'A') {
                    coor[j] = 0;
                }
                if (message[i] == 'B') {
                    coor[j] = 1;
                }
                if (message[i] == 'C') {
                    coor[j] = 2;
                }
                if (message[i] == 'D') {
                    coor[j] = 3;
                }
                if (message[i] == 'E') {
                    coor[j] = 4;
                }
                if (message[i] == 'F') {
                    coor[j] = 5;
                }              
            }
            else {
                j--;
            }
        }
        for (int j = 0, k = 0; j < len; j += 2, k++) {
            message_str[k] = (polybius[coor[j]][coor[j+1]]);
        }
        for (int i = 0, j = 0; i < mx_strlen(message); i++, j++) {
            if (mx_isalpha(message[i])) {
                mx_printchar(message_str[j]);
                i++;
            }
            else {
                mx_printchar(message[i]);
                j--;
            }
        } 
        mx_printchar('\n');   
    }
    else {
        mx_printerr("usage: ./polybius \"str\"\n");
    }
    // system ("leaks -q polybius\n");
    exit(0);
}

