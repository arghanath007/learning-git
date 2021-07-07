#include<bits/stdc++.h>

using namespace std;

int main()
{
    string numeric;
    cout<<"Enter a numeric value: ";
    getline(cin, numeric);
    int number= stoi(numeric);
    sort(numeric.begin(), numeric.end(), greater<char>());
    cout<<numeric<<endl;
}

