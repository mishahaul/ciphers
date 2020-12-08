#ifndef ATBASH_H
#define ATBASH_H


#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

bool mx_isupper(int c);
bool mx_islower(int c);
bool mx_isspace(char c);
bool mx_isalpha(int c);
int mx_strlen(const char *s);
void mx_printerr(const char *s);
void mx_printstr(const char *s);
char *mx_strnew(const int size);

#endif
