/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len = strlen(s);

    /* Base case: an empty string or a string of length 1 is a palindrome */
    if (len == 0 || len == 1)
        return 1;

    /* Check if the first and last characters of the string match */
    if (s[0] == s[len - 1])
        /* Recursive case: check if the rest of the string is a palindrome */
        return is_palindrome(s + 1, len - 2);

    /* If the first and last characters don't match, the string is not a palindrome */
    return 0;
}
