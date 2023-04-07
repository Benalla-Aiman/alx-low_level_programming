/**
* _memcpy - copies n bytes from memory area src to memory area dest
* @dest: pointer to destination
* @src: pointer to source
* @n: number of bytes to copy
*
* Return: pointer to destination
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *pdest = dest;
char *psrc = src;
while (n--)
{
*pdest++ = *psrc++;
}
return (dest);
}
