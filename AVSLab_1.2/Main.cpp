#include<iostream>
#include<omp.h>
using namespace std;

int main(int argc, char* argv[])
{
#pragma omp parallel
	{
		cout << "Thread: " << omp_get_num_threads() << endl;
	}

	cout << "Num of threads: " << omp_get_max_threads() << endl;
}