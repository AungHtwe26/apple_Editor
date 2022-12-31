//
// Created by aung on 12/26/2022.
//

#ifndef STRINGLIB_STRLIB_H
#define STRINGLIB_STRLIB_H

#endif //STRINGLIB_STRLIB_H
int strlen_k(const char *str);
int strcpy_k(char *destination, const char *source);
int strcmp_k(const char *str1, const char *str2);
int strcat_k(char *destination, const char *source);
int strncmp_k(const char *str1,const char *str2,const int number);
int strncpy_k(char *destination, const char *source,const int number);
int strncat_k(char *destination, const char *source,const int number);
int pow_k( int base,int exponent);
void clr_k(char *str,int count);
char* gets_k(char* str, int buffer_size);
void split_k(char* line, char* command, const char* str);
int c2i_k(char c);
int s2i_k(const char* line);
int sqrt_k(int x);