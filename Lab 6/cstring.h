//
//  c_string.h
//  Lab 6
//
//  Created by Phoebe ZOU on 11/27/20.
//

#ifndef cstring_h
#define cstring_h

namespace mystring {

char *strcpy(char *dest, const char *src);
char *strcat(char *dest, const char *src);
int strcmp(const char *str1, const char *str2);
char *strchr(char *str, int c);
char *strrchr(char *str, int c);
int strlen(const char *str);

}

#endif /* c_string_h */
