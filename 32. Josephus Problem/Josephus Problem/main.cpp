//
//  main.cpp
//  Josephus Problem
//
//  Created by Mikołaj Deja on 22/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    bool proceed=true;
    int n, k, counter, t;
    cin>>n>>k;
    int people[n];
    cout<<endl;
    t=k;
    for(int i=0; i<n; ++i)
        people[i]=i+1;
    
    while(proceed)
    {
        for(int j=0; j<n; ++j)
        {
            if(people[j]!=0)
                t--;
            if(t==0)
            {
                people[j]=0;
                t=k;
            }
        }
        
        proceed=false;
        counter=0;
        for(int i=0; i<n; ++i)
            if(people[i]!=0)
                counter++;
        if(counter>1)
            proceed=true;
    }
    for(int i=0; i<n; ++i)
        if(people[i]!=0)
            cout<<people[i]<<endl;
    cout<<endl;
    return 0;
}
