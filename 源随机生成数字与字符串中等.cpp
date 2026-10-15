#include "iostream"
#include "random"

using namespace std;
int get_random_R(int min, int max)
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(min, max);
    return dist(gen);
}
int main()
{
	int shuzi = get_random_R(1,  10);
    string huase = get_random_R(0, 1)?"红色":"黑色";
    string huase2;
    if (huase == "红色")
    {
        huase2 = get_random_R(0, 1) ? "红桃" : "方块";
    }
    else
    {
        huase2 = get_random_R(0, 1) ? "黑桃" : "梅花";
    }
    cout << shuzi << huase << huase2;
	return 0;
}