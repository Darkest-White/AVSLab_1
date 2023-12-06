#include<iostream>
#include<omp.h>
using namespace std;

int main(int argc, char* argv[])
{
	omp_set_dynamic(1);
	cout << "Dynamic is on" << endl;
#pragma omp parallel num_threads(128)
	{
#pragma omp master
		{
			cout << "Num of threads: " << omp_get_num_threads() << endl;
		}
	}

	omp_set_dynamic(0);
	cout << "Dynamic is off" << endl;
#pragma omp parallel num_threads(128)
	{
#pragma omp master
		{
			cout << "Num of threads: " << omp_get_num_threads() << endl;
		}
	}
}