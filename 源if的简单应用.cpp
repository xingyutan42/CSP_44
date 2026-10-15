#include "iostream"
using namespace std;

int main()
{
	cout << "欢迎来到黑马儿童游乐园，儿童免费，成人收费！"
		<<"\n请输入你的年龄：\n";
	int age;
	cin >> age;
	if (age < 18)
	{
		cout << "您未成年，免费游玩，欢迎你小朋友！";
	}
	return 0;
}