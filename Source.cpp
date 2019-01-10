#include<iostream>
6
int f()
{
	int arr[3][3]{ {-15,3,4},{-11,7,43},{-22,32,67} };
	int min;
	for (int i = 0; i < 3; ++i)
	{
		min = arr[0][0];
		for (int j = 0; j < 3; ++j)
		{
			if (arr[i][j] < min)
			{
				return min i; //= arr[i][j];
			}
		}
	}
}


int main()
{
	std::cout << f() << std::endl;
	system("pause");
	return 0;
}