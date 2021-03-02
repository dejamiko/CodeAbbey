//
//  main.cpp
//  Palindromes
//
//  Created by Mikołaj Deja on 23/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

string letters(string line)
{
    string letters="";
    int n=line.size();
    for(int i=0; i<n; ++i)
    {
        if(line[i]>='A' && line[i]<='z')
            letters+=(char)(int)line[i];
    }
    return letters;
}

string small(string letters)
{
    int n=letters.size();
    for(int i=0; i<n; ++i)
        if(letters[i]>='A' && letters[i]<='Z')
            letters[i]=(char)((int)letters[i]+32);
    return letters;
}

bool ispal(string letters)
{
    int n=letters.size();
    for(int i=0; i<n; ++i)
        if(letters[i]!=letters[n-1-i])
            return false;
    return true;
}

int main(){
    int n;
    string line;
    cin>>n;
    getline(cin, line);
    for(int i=0; i<n; ++i)
    {
        getline(cin, line);
        if(ispal(small(letters(line))))
            cout<<"Y ";
        else
            cout<<"N ";
    }
    return 0;
}
