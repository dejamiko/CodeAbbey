//
//  main.cpp
//  Integer Factorization
//
//  Created by Mikołaj Deja on 04/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n;
    unsigned long long int t;
    cin>>n;
    cout<<endl;
    for(int i=0; i<n; ++i)
    {
        cin>>t;
        for(long int i=2; i*i<=t; ++i)
        {
            while(t%i==0 && t/i>1)
            {
                cout<<i<<"*";
                t/=i;
            }
        }
        if(t>1)
            cout<<t;
        cout<<" ";
    }
    cout<<endl;
    return 0;
}
