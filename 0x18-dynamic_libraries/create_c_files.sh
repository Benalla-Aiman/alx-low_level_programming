#!/bin/bash

echo -e '#include <string.h>\nchar *_strcat(char *dest, char *src) {\n    return strcat(dest, src);\n}' > strcat.c
echo -e '#include <string.h>\nchar *_strncat(char *dest, char *src, int n) {\n    return strncat(dest, src, n);\n}' > strncat.c
echo -e '#include <string.h>\nchar *_strncpy(char *dest, char *src, int n) {\n    return strncpy(dest, src, n);\n}' > strncpy.c
echo -e '#include <string.h>\nint _strcmp(char *s1, char *s2) {\n    return strcmp(s1, s2);\n}' > strcmp.c
echo -e '#include <string.h>\nchar *_memset(char *s, char b, unsigned int n) {\n    return memset(s, b, n);\n}' > memset.c
echo -e '#include <string.h>\nchar *_memcpy(char *dest, char *src, unsigned int n) {\n    return memcpy(dest, src, n);\n}' > memcpy.c
echo -e '#include <string.h>\nchar *_strchr(char *s, char c) {\n    return strchr(s, c);\n}' > strchr.c
echo -e '#include <string.h>\nunsigned int _strspn(char *s, char *accept) {\n    return strspn(s, accept);\n}' > strspn.c
echo -e '#include <string.h>\nchar *_strpbrk(char *s, char *accept) {\n    return strpbrk(s, accept);\n}' > strpbrk.c
echo -e '#include <string.h>\nchar *_strstr(char *haystack, char *needle) {\n    return strstr(haystack, needle);\n}' > strstr.c
