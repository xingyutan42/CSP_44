#include "iostream"
using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;
	int a1 = A + B;
	int a2 = A - B;
	int a3 = A * B;
	int temp = (a1 > a2) ? a1 : a2;
	temp = (temp > a3) ? temp : a3;
	cout << temp;
	return 0;
}