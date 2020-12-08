#ifndef MXLIB_H
#define MXLIB_H


#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>


bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_strlen(const char *s);
int mx_atoi(const char *str);
void mx_printchar(char c);
void mx_printerr(const char *s);



#endif
