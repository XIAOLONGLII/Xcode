//编程题＃5：异常细胞检测

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int N = 0;
    cin >> N;
    int arr[100][100];
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    int countWrongCell = 0;
    for(int i = 1; i < N - 1; i++)
    {
        for(int j = 1; j < N - 1; j++)
        {
            if(arr[i][j] <= arr[i - 1][j] - 50 &&
               arr[i][j] <= arr[i + 1][j] - 50 &&
               arr[i][j] <= arr[i][j - 1] - 50 &&
               arr[i][j] <= arr[i][j + 1] - 50)
            {
                countWrongCell++;
            }
        }
    }
    cout << countWrongCell << endl;
}
