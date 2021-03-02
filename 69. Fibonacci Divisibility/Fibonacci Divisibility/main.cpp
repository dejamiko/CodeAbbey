//
//  main.cpp
//  Fibonacci Divisibility
//
//  Created by Mikołaj Deja on 04/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n;
    cout<<endl;
    for(int i=0; i<n; ++i)
    {
        long int fibmod[150000];
        fibmod[0]=0;
        fibmod[1]=1;
        fibmod[2]=1;
        cin>>m;
        for(int j=3; j<150000; ++j)
        {
            fibmod[j]=(fibmod[j-1]+fibmod[j-2])%m;
            if(fibmod[j]==0)
            {
                cout<<j<<" ";
                break;
            }
        }
    }
    cout<<endl;
    return 0;
}
