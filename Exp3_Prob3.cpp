#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;
int main() 
{
	int as;
	char dat[1000];
	char i;
	
	cout << "Enter any letters or numbers to be sorted :"<< endl;
	cout << " " << endl;
	cin >> dat;
	as=strlen(dat);
	for (int m = 0; m < as; m++)
	for (int n = 0; n< as - 1; n++)
	{
		if (dat[n] > dat[n + 1]) 
		{
			i= dat[n];
			dat[n] = dat[n + 1];
			dat[n + 1] = i;
		}
	}
	cout << "------------------------------------------" << endl;
	cout << "\nSorted Data Outcome :"<< dat << endl;
	cout << "\nArray Size: There are "<< as<< " characters" << endl;
	getch();
	return 0;
}