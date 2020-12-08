#ifndef MXLIB_H
#define MXLIB_H


#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

bool mx_isalpha(int c);
int mx_strlen(const char *s);
void mx_printchar(char c);
void mx_printerr(const char *s);


#endif
