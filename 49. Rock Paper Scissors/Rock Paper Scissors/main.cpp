//
//  main.cpp
//  Rock Paper Scissors
//
//  Created by Mikołaj Deja on 27/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, p1, p2;
    cin>>n;
    string line;
    getline(cin, line);
    cout<<endl;
    for(int i=0; i<n; ++i)
    {
        p1=0;
        p2=0;
        getline(cin, line);
        int len=line.size();
        for(int i=0; i<len; i+=3)
        {
            if((line[i]=='S' && line[i+1]=='P') || (line[i]=='P' && line[i+1]=='R') || (line[i]=='R' && line[i+1]=='S'))
                p1++;
            if((line[i+1]=='S' && line[i]=='P') || (line[i+1]=='P' && line[i]=='R') || (line[i+1]=='R' && line[i]=='S'))
                p2++;
        }
        if(p1>p2)
            cout<<"1 ";
        else
            cout<<"2 ";
    }
    cout<<endl;
    return 0;
}
