#ifndef CAESAR_H
#define CAESAR_H


#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

bool mx_isupper(int c);
bool mx_islower(int c);
bool mx_isspace(char c);
bool mx_isdigit(int c);
int mx_atoi(const char *str);
int mx_strlen(const char *s);
void mx_printchar(char c);
void mx_printerr(const char *s);


#endif
