//
//  main.cpp
//  Lab 6
//
//  Created by Phoebe ZOU on 11/27/20.
//
#include "cstring.h"

//copy string
char *mystring::strcpy(char *dest, const char *src){
    *dest = *src;
    if(*src) mystring::strcpy(dest+1, src+1);
    return dest;
}

//string concatenates
char *mystring::strcat(char *dest, const char *src){
        mystring::strcpy(dest+mystring::strlen(dest), src);
        return dest;
}

//compare string
int mystring::strcmp(const char *str1, const char *str2){
    return str1<str2? -1 : str1==str2? 0: 1;
}

//first location
char *mystring::strchr(char *str, int c){
    for(; *str!='\0'; str++){
        if(*str==c) return str;
    }
    return 0;
}

//last location
char *mystring::strrchr(char *str, int c){
    for(str = str+mystring::strlen(str); *str>=0; str--){
        if(*str == c) return str;
    }
    return 0;
}

//length of a string
int mystring::strlen(const char *str){
    if(*str == '\0') return 0;
    else return mystring::strlen(str+1)+1;
}
