#ifndef BACONIAN_H
#define BACONIAN_H


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
int mx_strcmp(const char *s1, const char *s2);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strndup(const char *s1, unsigned long n);
char *mx_strnew(const int size);

#endif
