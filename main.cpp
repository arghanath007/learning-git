#include<bits/stdc++.h>

using namespace std;

int main()
{
    //This is a C++ program to find the highest number.
    string numeric;
    cout<<"Enter a numeric value: ";
    getline(cin, numeric);
    int number= stoi(numeric);
    sort(numeric.begin(), numeric.end(), greater<char>());
    cout<<numeric<<endl;
}

