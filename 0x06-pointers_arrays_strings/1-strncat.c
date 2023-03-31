/**
* _strncat - Concatenates two strings
*
* @dest: The destination string
* @src: The source string
* @n: The maximum number of bytes to be used from src
*
* Return: A pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0, i = 0;
/* Find the length of the destination string */
while (dest[dest_len] != '\0')
{
dest_len++;
}
/* Append the source string to the destination string */
while (i < n && src[i] != '\0')
{
dest[dest_len] = src[i];
i++;
dest_len++;
}
/* Add the null character to the end of the concatenated string */
dest[dest_len] = '\0';
return dest;
}
