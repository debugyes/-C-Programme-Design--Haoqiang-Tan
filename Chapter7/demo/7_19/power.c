extern A;
int power(int m)
{
	int y = 1;
	for (int i = 0; i < m; i++)
	{
		y *= A;
	}
	return y;
}