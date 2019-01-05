//
//  main.cpp
//  PekingUniversity2-week2
//
//  Created by Xiaolong Li on 1/5/19.
//  Copyright © 2019 Xiaolong Li. All rights reserved.
//

#include <iostream>
using namespace std;
void change(int c, int d)
{
    c = 50;
    d = 60;
}

int main(int argc, const char * argv[])
{
    int a = 5, b = 6;
    change(a , b);
    cout << a << " " << b << endl;
    
}
