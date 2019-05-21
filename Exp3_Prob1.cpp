#include <iostream>
#include <conio.h>
using namespace std;
int main()

{
	int a, arr[10]; 
	double smallest, largest;
	double sum=0;
	cout<< "Input 10 numbers (Press 'ENTER' when done.)"<< endl;
	for(a=0;a<10;a++)
	{
		cin>>arr[a];
	}
	for(a=0;a<10;a++)
	{
		sum=sum+arr[a];
	}
	smallest= arr[0];
	largest= arr[0];
	for (int i=0;i<10;i++)
	{	if(arr[i]>largest)
		{
			largest=arr[i];
		}
		if(arr[i]<smallest)
		{
			smallest=arr[i];
		}
	}
	cout << "___________________________________________" << endl;
	cout << " " << endl;
	cout<< "Largest integer: "<< largest<< endl;
	cout << "Smallest integer: "<< smallest<< endl;
	cout << "The total is: "<< sum<< endl;
	cout << "The average is: " << sum/10<< endl;
	getch();
	return 0;
}