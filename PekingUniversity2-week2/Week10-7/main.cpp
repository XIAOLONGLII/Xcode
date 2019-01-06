//编程题＃7：中位数
//sort each array
// if the legnth is odd, the 0-4 -> 2
// if the length is even, the 0-5 -> 2 + 3 / 2


#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[])
{
    int N = 0;
    int arr[15000];
    while(cin >> N)
    {
        if( N == 0)
        {
            break;
        }
        for(int i = 0; i< N; i++)
        {
            cin >> arr[i];
        }
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N - i - 1; j++)
            {
                if( arr[j + 1] < arr[j])
                {
                    int temp = arr[j];
                    arr[j] = arr[ j + 1];
                    arr[ j + 1 ] = temp;
                }
            }
        }
        // 0 , 1 , 2, 3
        if( N % 2 == 0)
        {
            cout << (arr[ N / 2 - 1] + arr[ N / 2]) / 2 << endl;
        }
        else
        {
            cout << arr[N / 2] << endl;
        }
        
    }
}
