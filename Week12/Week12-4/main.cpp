//编程题＃4：简单计算器


#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int a, b;
    char c[4] = {'+','-','*','/'};
    char ch;
    cin >> a >> b >> ch;
    if( ch == '+')
    {
        cout << a + b << endl;
    }
    else if( ch == '-')
    {
        cout << a - b << endl;
    }
    else if( ch == '*')
    {
        cout << a * b << endl;
    }
    else if( ch == '/')
    {
        if( b == 0)
        {
            cout <<"Divided by zero!"<<endl;
        }
        else
        {
             cout << a / b << endl;
        }
    }
    else
    {
        cout << "Invalid operator!"<<endl;
    }
    
    
}
