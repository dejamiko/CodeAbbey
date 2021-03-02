//
//  main.cpp
//  Matching Brackets
//
//  Created by Mikołaj Deja on 26/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

string trim(string line)
{
    string edited;
    int length=line.size();
           for(int i=0; i<length; ++i)
               if(line[i]=='(' || line[i]==')' || line[i]=='[' || line[i]==']' || line[i]=='{' || line[i]=='}' || line[i]=='<' || line[i]=='>')
                   edited+=line[i];
    return edited;
}

int main(){
    int n;
    string line;
    string edited;
    cin>>n;
    cout<<endl;
    getline(cin, line);
    for(int i=0; i<n; ++i)
    {
        edited="";
        getline(cin, line);
        edited=trim(line);
        int len=edited.size();
        for(int m=0; m<len; m++)
        {
            for(int j=0; j<len-1; ++j)
            {
                if((edited[j]=='<' && edited[j+1]=='>') || (edited[j]=='(' && edited[j+1]==')') || (edited[j]=='{' && edited[j+1]=='}') || (edited[j]=='[' && edited[j+1]==']'))
                {
                    edited[j]='a';
                    edited[j+1]='a';
                    edited=trim(edited);
                    j=len-1;
                }
            }
        }
        if(edited.length()==0)
            cout<<"1 ";
        else
            cout<<"0 ";
    }
    cout<<endl;
    return 0;
}
