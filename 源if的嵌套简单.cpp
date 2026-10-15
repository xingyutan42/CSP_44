#include "iostream"
#include <cstdlib>  
#include <ctime> 
using namespace std;

int main()
{
	srand(time(NULL));
	int R = rand() % 100+1;
	cout << "随机数："
		<< R
		<< endl
		<< "请输入一个数：";
	int num;
	cin >> num;
	if (num == R)
	{
		cout << "你猜对了\n";
	}
	else
	{
		cout << "你猜错了，你还有2次机会\n";
		cin >> num;
		if (num == R)
		{
			cout << "你猜对了\n";
		}
		else
		{
			cout << "你猜错了，你还有1次机会\n";
			cin >> num;
			if (num == R)
			{
				cout << "你猜对了\n";
			}
			else
			{
				cout << "你猜错了，你失败了\n";
			}
		}
	}
	return 0;
}