#include <iostream>
#include <iomanip>
using namespace std;

void getInput(int &,int &,int &);
int  findMin(int, int, int, int);
void printResult(int,int,int,int);

int main()
{
	int min, n1, n2, n3;
	getInput(n1, n2, n3);
	min = findMin(n1, n2, n3,min);
	printResult(n1, n2, n3, min);
}

void getInput(int &n1, int &n2, int &n3)
{
	cout << "Enter three values, one at a time: " << endl;
	cin >> n1 >> n2 >> n3;
}

int findMin(int n1, int n2, int n3, int min)
{
	int array[3] = {n1,n2,n3};
	min = array[0];
	for(int i = 1; i < 3; i++)
	{
		if(array[i] < min)
		{
			min = array[i];
		}
	}
	return min;
}

void printResult(int n1, int n2, int n3, int min)
{
	cout << n1 << " " << n2 << " " << n3 << " " << min << " " << endl;
}