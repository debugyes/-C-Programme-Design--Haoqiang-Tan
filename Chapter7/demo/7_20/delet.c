void delet_string(char str[], char ch)
{
	int j = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ch)
		{
			str[j++] = str[i];
		}
	}
	str[j] = '\0';
}