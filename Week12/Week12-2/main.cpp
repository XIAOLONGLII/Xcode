//编程题＃2：能被3，5，7整除的数

#include <iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n) {
        if( n % 3 == 0)
        {
            if(( n % 5 == 0) && ( n % 7 == 0))
            {
                cout << 3 << " "<< 5 << " "<< 7 << endl;
            }
            else if (( n % 5 == 0) && ( n % 7 != 0))
            {
                cout << 3 << " "<< 5 << endl;
            }
            else if (( n % 5 != 0) && ( n % 7 == 0))
            {
                cout << 3 << " "<< 7 << endl;
            }
            else
            {
                cout << 3 << endl;
            }
        }
        else if( n % 5 == 0)
        {
            if(( n % 3 == 0) && ( n % 7 == 0))
            {
                cout << 3 << " "<< 5 << " "<< 7 << endl;
            }
            else if (( n % 3 == 0) && ( n % 7 != 0))
            {
                cout << 3 << " "<< 5 << endl;
            }
            else if (( n % 3 != 0) && ( n % 7 == 0))
            {
                cout << 5 << " "<< 7 << endl;
            }
            else
            {
                cout << 5 << endl;
            }
        }
        else if( n % 7 == 0)
        {
            if(( n % 3 == 0) && ( n % 5 == 0))
            {
                cout << 3 << " "<< 5 << " "<< 7 << endl;
            }
            else if (( n % 3 == 0) && ( n % 5 != 0))
            {
                cout << 3 << " "<< 7 << endl;
            }
            else if (( n % 3 != 0) && ( n % 5 == 0))
            {
                cout << 5 << " "<< 7 << endl;
            }
            else
            {
                cout << 7 << endl;
            }
        }
        else
        {
            cout <<"n"<<endl;
        }
    }
}

//int main(int argc, const char * argv[])
//{
//    int num = 0;
//    cin >> num;
//    if( num % 3 == 0 && num % 5 == 0 && num % 7 == 0)
//    {
//        cout << 3 << " "<< 5 << " "<< 7 << endl;
//    }
//    else if( num % 3 == 0 && num % 5 == 0 && num % 7 != 0)
//    {
//       cout << 3 << " "<< 5 << endl;
//    }
//    else if( num % 3 == 0 && num % 5 != 0 && num % 7 == 0)
//    {
//        cout << 3 << " "<< 7 << endl;
//    }
//    else if( num % 3 != 0 && num % 5 == 0 && num % 7 == 0)
//    {
//        cout << 5 << " "<< 7 << endl;
//    }
//    else if( num % 3 == 0 && num % 5 != 0 && num % 7 != 0)
//    {
//        cout << 3 << endl;
//    }
//    else if( num % 3 != 0 && num % 5 == 0 && num % 7 != 0)
//    {
//        cout << 5 << endl;
//    }
//    else if( num % 3 != 0 && num % 5 != 0 && num % 7 == 0)
//    {
//        cout << 7 << endl;
//    }
//    else
//    {
//        cout << 'n' << endl;
//    }
//
//
//}
