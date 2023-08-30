/*
Given a number R calculate the area of a circle using the following formula:

Area = π * R2.

Note: consider π = 3.141592653.
*/

#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    double PI = 3.141592653;
    double r;
    cin>> r;
    cout<< fixed << setprecision(9) << PI * r * r << endl;
}
