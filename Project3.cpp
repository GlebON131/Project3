#include <iostream>

int main()
{
	int N = 25;
	for (int i = 1; i < N; ++i) 
	{
		if (i % 2) 
		{
			continue;
		}
		else
		{
			std::cout << i << "\n";
		}
	}
}

