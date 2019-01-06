//编程题＃4：矩阵交换行
// 5*5

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[])
{
    int arr[5][5] = { 0 };
    int n = 0,m = 0;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }
    //则将n行和m行交换
    cin >> n >> m;
    if(n >= 0 && n <= 4 && m >= 0 && m <= 4)
    {
        int temp[5] = { 0 };
        for(int i = 0; i < 5; i++)
        {
            temp[i] = arr[n][i];
            arr[n][i] = arr[m][i];
            arr[m][i] = temp[i];
        }
        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                cout <<setw(4) << arr[i][j];
                //cout << arr[i][j]<< " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "error";
    }
}
    //则将n lie 和m lie 交换
    
//    for(int i = 0; i < 5; i++)
//    {
//        int temp[5] = { 0 };
//        temp[i] = arr[i][n];
//        arr[i][n] = arr[i][m];
//        arr[i][m] = temp[i];
//    }
//
//    for(int i = 0; i < 5; i++)
//    {
//        for(int j = 0; j < 5; j++)
//        {
//            cout << setw(4) << arr[i][j];
//        }
//        cout << endl;
//    }
//
//
//}


//
//    for(int i = 0; i < 3; i++)
//    {
//        for(int j = 0; j < 3; j++)
//        {
//            if(arr[i][j] != n || arr[i][j] != m)
//            {
//                cout << "error";
//            }
//            else
//            {
//                if( arr[i][j] == n ){
//                    cout << i << j;
//                }
//
//            }
//            cout << arr[i][j] << " ";
//        }
//
//
//        cout << endl;
//        }
