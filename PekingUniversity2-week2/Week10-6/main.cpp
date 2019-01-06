//编程题＃6：循环移动
//11 4
//15 3 76 67 84 87 13 67 45 34 45
// _  _  _  _  15 3 76 67 84 87 13
// 67 45 34 45

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int n = 0, m = 0;
    cin >> n >> m;
    int arr[100], arr1[100];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for(int i = 0; i < n; i++)
    {
        arr1[i] = arr[i];
    }
    //arr == arr1;
    // length = n
    for(int i = 0; i < n; i++)
    {
        int t = i + m;
        //cout << "t = "<< t <<endl;
        if( t < n)
        {
            arr[t] = arr1[i];
            // t = 8, i = 4, m = 4,n = 11
            // a[8] =
        }
        else
        {
            // 15 -> 0 + 4, 3 -> 1 + 4, 76 -> 2 + 4, 67 -> 3 + 4, 84 -> 4 + 4
            // 87 -> 5 + 4 13 -> 6 + 4
            // 67 -> 7 + 4 >= 10
            arr[t - n] = arr1[i];
            //87  i = 5, 5 + 4 = 9 9 < n
            //arr[ 9] = arr[5];
            // 13, i = 6, 6 + 4 = 10 10 < n
            // arr[10] = arr[
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    
}
