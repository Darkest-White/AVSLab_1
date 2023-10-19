#include<iostream>
#include<omp.h>
using namespace std;

int main(int argc, char* argv[])
{
#pragma omp parallel
	{
		cout << "Thread: 1" << endl;
		cout << omp_get_num_threads() << endl;
	}

#pragma omp parallel num_threads(3)
	{
		cout << "Thread: 2" << endl;
		cout << omp_get_num_threads() << endl;
	}


#pragma omp parallel
	{
		omp_set_num_threads(4);
		cout << "Thread: 3" << endl;
		cout << omp_get_num_threads() << endl;
	}
	return 0;
}
