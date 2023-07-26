/**
 * rot13 - Encodes a string using ROT13.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the encoded string.
 */
char *rot13(char *str)
{
	char *ptr = str;
	char rotate[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	int i;

	while (*ptr != '\0')
	{
		for (i = 0; alphabet[i] != '\0'; i++)
		{
			if (*ptr == alphabet[i])
			{
				*ptr = rotate[i];
				break;
			}
		}
		ptr++;
	}

	return (str);
}
