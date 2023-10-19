#include<iostream>
#include<omp.h>
using namespace std;

int main(int argc, char* argv[])
{
	if (argc < 2)
	{
		cout << "No parameters" << endl;
		return 0;
	}

	string mode = argv[1];

	if (mode == "parallel")
	{
#pragma omp parallel
		{
			cout << "parallel mode is on" << endl;
		}
	}
	else if (mode == "serial")
	{
		cout << "serial mode is on" << endl;
	}
	else
	{
		cout << "Uncorrect parameters" << endl;
	}

}