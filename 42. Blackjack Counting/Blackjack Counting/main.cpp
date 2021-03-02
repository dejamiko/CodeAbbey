//
//  main.cpp
//  Blackjack Counting
//
//  Created by Mikołaj Deja on 30/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
using namespace std;

int main(){
    int n, sum, ace;
    string lin;
    cin>>n;
    cout<<endl;
    getline(cin, lin);
    for(int i=0; i<n; ++i)
    {
        sum=0;
        ace=0;
        getline(cin, lin);
        string temp;
        stringstream check(lin);
        while(getline(check, temp, ' '))
        {
            if(temp[0]>='2' && temp[0]<='9')
                sum+=temp[0]-48;
            if(temp[0]=='A')
                ace++;
            if(temp[0]=='T' || temp[0]=='J' || temp[0]=='Q' || temp[0]=='K')
                sum+=10;
        }
        while(ace>0)
        {
            if(sum<=11-ace)
                sum+=11;
            else
                sum+=1;
            ace--;
        }
        if(sum>21)
            cout<<"Bust ";
        else
            cout<<sum<<" ";
    }
    return 0;
}
