//编程题＃8：校门外的
// 500 = 501
// 300 - 150 + 1= 151
// 150 - 100  = 50
// 471 - 470 + 1 = 2
// 501  - (151 + 50 + 2)

//1000  - 101 * 2 + 11 * 2 + 11 * 2 = 842


#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int L = 0, M = 0;
    int start = 0, end = 0;
    int sum = 0;
    cin >> L >> M;
    int tree[10010];
    vector<int> v1;
    vector<int> v2;
    for(int i  = 0; i < M; i++)
    {
        cin >> start >> end;
        v1.push_back(start);
        v2.push_back(end);
    }
    for(int i = 0; i < M; i++)
    {
//        cout <<v1[i] << " ";
//        cout <<v2[i] << " ";
        for(int j = v1[i]; j <= v2[i]; j++)
        {
            tree[j] = 0;
        }
        
    }
    
    for(int i = 0; i <= L; i++)
    {
        if(tree[i] == 1)
        {
            sum++;
        }
    }
    cout << sum << endl;

    cout << endl;
    
}
