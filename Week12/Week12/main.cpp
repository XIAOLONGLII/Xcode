//编程题＃1：判断闰年
// 0 < a < 3000

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a;
    cin >> a;
    if( a % 4 == 0 && a % 400 ==0)
    {
        cout << "Y"<<endl;
    }
    else
    {
        cout << "N" << endl;
    }
}
