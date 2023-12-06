#include<iostream>
#include<omp.h>
using namespace std;

int main(int argc, char* argv[])
{
	system("chcp 1251");
	system("cls");
	omp_set_num_threads(5);
	string tmp;
	do
	{
		cout << "Input parameter: ";
		cin >> tmp;
	} while (tmp != "parallel" && tmp != "serial");

	if (tmp == "parallel")
	{
		cout << "\nПараллельный регион\n";
#pragma omp parallel
		{
			cout << "I'm Parallel!\n";
		}
	}
	else cout << "\nПоследовательный регион\n";

}