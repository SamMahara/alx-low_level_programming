/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 *
 * Return: pointer to resulting string
 */
char *cap_string(char *str)
{
int i, j;
char sep[] = " \t\n,;.!?\"(){}";

for (i = 0; str[i]; i++)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		if (i == 0)
			str[i] -= 32;
		else
		{
			for (j = 0; sep[j]; j++)
			{
				if (str[i - 1] == sep[j])
				{
					str[i] -= 32;
					break;
				}
			}
		}
	}
}
return (str);
}

