#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int arrA[7];
	int arrB[7];
	int arrC[7];
	int Pa;
	int Pb;
	int Pc;
	int arrx;
	int arry;
	int arrz;
	cout<< "Enter all temperature for a week of Province A, Province B and then Province C."<< endl;
	cout<< "-------------------------------------------------------------------------------" << endl;
	for (arrx=0;arrx<7;arrx++)
	{
		cout << "Province A, Day " <<arrx+1<< ": ";
		cin >> arrA[arrx];
	}
	for (arry=0;arry<7;arry++)
	{
		cout << "Province B, Day " << arry+1<< ": ";
		cin >> arrB[arry];
	}
	for (arrz=0;arrz<7;arrz++)
	{
		cout << "Province C, Day " << arrz+1<< ": ";
		cin >> arrC[arrz];
	}
	cout << "\nDisplaying Values:\n"<< endl;
	for (Pa=0;Pa<7;Pa++)
	{
	cout <<"Province A, Day " <<Pa+1 << "= " <<arrA[Pa] << endl;
	}
	for (Pb=0;Pb<7;Pb++)
	{
	cout << "Province B, Day " <<Pb+1 << "= " <<arrB[Pb] << endl;
	}
	for (Pc=0;Pc<7;Pc++)
	{
	cout << "Province C, Day " <<Pc+1 << "= " <<arrC[Pc] << endl;
	}

	getch();
	return 0;
}