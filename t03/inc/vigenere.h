#ifndef VIGENERE_H
#define VIGENERE_H


#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

bool mx_isalpha(int c);
bool mx_isupper(int c);
bool mx_islower(int c);
bool mx_isspace(char c);
int mx_strlen(const char *s);
void mx_printchar(char c);
void mx_printerr(const char *s);


#endif
