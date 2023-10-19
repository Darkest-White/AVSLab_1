#include<iostream>
#include<omp.h>
using namespace std;

int main(int argc, char* argv[])
{
	cout << "parallel area 1" << endl;

#pragma omp parallel
	{
		cout << "parallel area" << endl;
	}

	cout << "parallel area 2" << endl;

	return 0;
}
