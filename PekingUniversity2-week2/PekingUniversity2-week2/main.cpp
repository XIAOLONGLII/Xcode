//
//  main.cpp
//  PekingUniversity2-week2
//
//  Created by Xiaolong Li on 1/5/19.
//  Copyright © 2019 Xiaolong Li. All rights reserved.
//

#include <iostream>
using namespace std;
// only copy
void change(int c, int d)
{
    c = 50;
    d = 60;
}
// only copy
void change2(int a, int b)
{
    a = 50;
    b = 60;
}
void change3(int a, int b)
{
    int p;
    if( a < b)
    {
        p = a;
        a = b;
        b = p;
    }
}
int a1 = 0, b1 = 0;
void change4()
{
    int p;
    if( a1 < b1)
    {
        p = a1;
        a1 = b1;
        b1 = p;
    }
}
int a2 = 0, b2 = 0;
void change5(int a1, int b1)
{
    int p;
    if( a1 < b1)
    {
        p = a1;
        a1 = b1;
        b1 = p;
    }
    
}

void change6(int a, int b)
{
    a = 30;
    b = 50;
}

void change7(int a[])
{
    a[0] = 30, a[1] = 50;
}

int main(int argc, const char * argv[])
{
    int a = 5, b = 6;
    change(a , b);
    cout << "Change 1: "<< a << " " << b << endl;
    
    change2(a, b);
    cout << "Change 2: "<< a << " " << b << endl;
    
    change3(a, b);
    cout << "Change 3: "<< a << " " << b << endl;
    
    cin >> a1 >> b1;
    change4();
    cout << "Change 4: "<< a1 << " " << b1 << endl;
    
    cin >> a2 >> b2;
    change5(a2, b2);
    cout << "Change 5: "<< a2 << " " << b2 << endl;
    
    int arr[2] = { 3, 5 };
    change6(arr[0], arr[1]);
    cout << "Change 6: " << arr[0] << " " << arr[1] <<endl;
    
    int arr7[2] = { 3, 5};
    change7(arr7); // send arr7's address to the func change7
    cout << arr7[0] << " "<< arr7[1] << endl;
}
