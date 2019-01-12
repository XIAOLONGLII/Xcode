//编程题＃5：字符串插入
//str
// substr.length = 3

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    
    
    string s = "hello";
    cout << s.substr(3,2)<<endl;
    
    //method2
    string a, b;
    while(cin >> a >> b)
    {
        int p = 0;
        int t = a[0];
        for(int i = 0; i < a.size(); i++)
        {
            if( a[i] > t)
            {
                t = a[i];
                p = i;
            }
        }
        a.insert(p + 1, b);
        cout << a <<endl;
    }
    
    
 //method 1
//    string s1, s2;
//    cin >> s1 >> s2;
//    int le1 = s1.length();
//
//    char ch[le1 + 1];
//    strcpy(ch, s1.c_str());
//
//    int max = 0;
//    int index = 0;
//
//    for(int i = 0; i < le1; i++)
//    {
//        if( ch[i] > max)
//        {
//            max = ch[i];
//            index = i;
//        }
//    }
//    string s3 = s1.substr(0,index + 1);
//    string s4 = s3 + s2 + s1.substr(index + 1);
//    cout << s4 << endl;
    

    

}
