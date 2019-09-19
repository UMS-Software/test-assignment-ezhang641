//
//  main.cpp
//  HelloWorld
//
//  Created by Evan Zhang on 9/3/19.
//  Copyright © 2019 Evan Zhang. All rights reserved.
//

#include <iostream>
using namespace std;

int add(int x, int y)
{
    return x+y;
}
int main()
{
    int x=0;
    int y=0;
    cout<< "Enter the first digit: ";
    cin >> x;
    cout<< "Enter the second digit: ";
    cin >> y;
    // insert code here...
    cout << "Result: " << add(x,y) << "\n";
    return 0;
}

