//
//  main.cpp
//  Anagrams
//
//  Created by Mikołaj Deja on 07/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

bool anagram(string s, string t)
{
    if(s.size()!=t.size())
        return false;
    for(int i=0; i<s.size(); ++i)
    {
        bool con=false;
        for(int j=0; j<s.size(); ++j)
            if(s[i]==t[j])
                con=true;
        if(con==0)
            return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    ifstream words("/Users/mikolajdeja/Documents/ComputerScience/Solutions/words.txt");
    string wo[64000];
    for(int i=0; i<64000; ++i)
    {
        words>>wo[i];
        if(wo[i].size()==0)
            break;
    }
    for(int i=0; i<n; ++i)
    {
        string s;
        cin>>s;
        int counter=0;
        for(int j=0; j<64000; ++j)
            if(anagram(s, wo[j]))
            {
                counter++;
            }
        cout<<counter-1<<" ";
    }
    cout<<endl;
}
