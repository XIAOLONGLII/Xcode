//编程题＃5：字符串插入
//str
// substr.length = 3

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
   
    string s1, s2;
    cin >> s1 >> s2;
    int le1 = s1.length();
    
    char ch[le1 + 1];
    strcpy(ch, s1.c_str());
    
    int max = 0;
    int index = 0;

    for(int i = 0; i < le1; i++)
    {
        if( ch[i] > max)
        {
            max = ch[i];
            index = i;
        }
    }
    string s3 = s1.substr(0,index + 1);
    string s4 = s3 + s2 + s1.substr(index + 1);
    cout << s4 << endl;

    

}
