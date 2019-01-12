

#include <iostream>
using namespace std;

int pizza(int n)
{
    int num = 0;
    if( n == 0)
    {
        num = 1;
    }
    else
    {
        num = (pizza(n - 1)+ n);
    }
    return num;
    
    // n == 1, pizza(1) else -> num = pizza(1-1) + 1 = 2
    // n == 2, pizza(2) else -> num = pizza(1) + n;
}

int main(int argc, const char * argv[])
{
    int cut = 0;
    cin >> cut;
    cout << pizza(cut) << endl;
   
}
