#ifndef MORSE_H
#define MORSE_H

#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>

int mx_strlen(const char *s);
int mx_count_words(const char *str, char delimiter);
char *mx_strndup(const char *s1, unsigned long n);
void mx_printchar(char c);
void mx_printerr(const char *s);
int mx_strcmp(const char *s1, const char *s2);
char **mx_strsplit(const char *s, char c);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);



#endif
