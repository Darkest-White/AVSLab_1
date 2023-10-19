#include<iostream>
#include<omp.h>
using namespace std;

int main(int argc, char* argv[])
{
	omp_set_dynamic(0);

#pragma omp parallel num_threads(128)
	{

	}

	cout << "Num of threads: " << omp_get_num_threads() << endl;

	return 0;
}