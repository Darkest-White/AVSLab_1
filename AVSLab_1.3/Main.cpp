#include<iostream>
#include<omp.h>
using namespace std;


int main(int argc, char* argv[])
{
	cout << "Area: 1 ";
#pragma omp parallel
	{
		cout << "Threads: " << omp_get_num_threads() << endl;
	}

	cout << "Area: 2 ";
#pragma omp parallel num_threads(3)
	{
		cout << "Threads: " << omp_get_num_threads() << endl;
	}

	omp_set_num_threads(4);
	cout << "Area: 3 ";
#pragma omp parallel
	{
		cout << "Threads: " << omp_get_num_threads() << endl;
	}
}