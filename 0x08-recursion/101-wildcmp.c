/**
* wildcmp - Compare two strings allowing for wildcard character *
*
* @s1: The first string to compare
* @s2: The second string to compare, may contain wildcard *
*
* Return: 1 if strings can be considered identical, 0 otherwise
*/
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
/* If the * matches the end of the string, the strings match */
if (*s1 == '\0')
return (wildcmp(s1, s2 + 1));
/* Otherwise, check if the * matches the current character */
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
return (0);
}
