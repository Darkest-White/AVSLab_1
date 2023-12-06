#include<iostream>
#include<omp.h>
using namespace std;

int main(int argc, char* argv[])
{
	cout << "parallel area 1" << endl;

	int a = 10000000;

	for (int i = 0; i < a; i++)
	{
		auto b = sin(i);
	}

#pragma omp parallel
	{
		cout << "parallel area" << endl;

		for (int i = 0; i < a; i++)
		{
			auto b = sin(i);
		}
	}

	cout << "parallel area 2" << endl;

	for (int i = 0; i < a; i++)
	{
		auto b = sin(i);
	}

	return 0;
}
