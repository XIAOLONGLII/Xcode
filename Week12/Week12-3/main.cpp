//编程题＃3：最远距离
// ( x , y) ( x1, y2)

//sqrt[( y2- y) ^ 2 + ( x1 - x) ^ 2]
#include <iostream>
#include <vector>
#include <iomanip>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[])
{
    int n;
    cin >> n;
    double arr[100], arr1[100];
    
    for (int i = 0; i < n; i++)
    {
        cin >>arr[i] >> arr1[i];
    }
    double max = 0;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i; j < n - 1; j++)
        {
            double temp = sqrt((((arr1[j] - arr1[ j + 1]) * (arr1[j] - arr1[ j + 1])) +
                            (arr[i] - arr[ i + 1]) * (arr[i] - arr[ i + 1])));
            if( temp > max )
            {
                max = temp;
            }
        }
    }
    cout << fixed<<setprecision(4)<< max << endl;

}
//    int n;
//    cin >> n;
//    double arr[100][100];
//    for(int i = 0; i < n; i++)
//    {
//        for(int j = 0; j < 2; j++)
//        {
//            cin >> arr[i][j];
//        }
//    }
//    int max = 0;
//    for(int i = 0; i < n; i++)
//    {
//        for(int j = 0; j < 2; j++)
//        {
//            double temp = (arr[i][j] - arr[i][j + 1]) * (arr[i][j] - arr[i][j + 1]) +
//            (arr[i][j] - arr[i + 1][j] * arr[i][j] - arr[i + 1][j]);
//
//            if( max < sqrt(temp))
//               {
//                   max = sqrt(temp);
//               }
//
//        }
//    }
//    cout << fixed << max << endl;
//}
