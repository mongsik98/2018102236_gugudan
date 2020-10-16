#include <iostream>

using namespace std;

int main()
{
	for (int i=1; i < 9; i++) //"9를 10으로"
	{
		for (int j = 1; j < 10; j++)
		{
			cout << i << " * " << j << " = " << i * j << "\t";
		}
		cout << endl;
	}
}
