#include "iostream"
using namespace std;

int main()
{
	int X, A, B;
	cin >> X >> A >> B;
	int temp = X - A;
	int temp2 = temp / B;
	temp = temp - temp2 * B;
	cout << temp;
	return 0;
}