//
//  main.cpp
//  Fool's Day 2014
//
//  Created by Mikołaj Deja on 29/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
using namespace std;

int textToInt(string s)
{
    int sum=0, len=s.size();
    for(int i=0; i<len; ++i)
    {
        sum+=(s[len-i-1]-48)*pow(10, i);
    }
    return sum;
}

int main(){
    int n, line[15], sum;
    string lin;
    cin>>n;
    cout<<endl;
    getline(cin, lin);
    for(int i=0; i<n; ++i)
    {
        sum=0;
        int j=0;
        memset(line, 0, 60);
        getline(cin, lin);
        string temp;
        stringstream check(lin);
        while(getline(check, temp, ' '))
        {
            line[j]=textToInt(temp);
            j++;
        }
        while(j>=0)
        {
            sum+=pow(line[j], 2);
            j--;
        }
        cout<<sum<<" ";
    }
    return 0;
}
