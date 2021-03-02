//
//  main.cpp
//  Double dice roll
//
//  Created by Mikołaj Deja on 25/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    long int n, r1, r2;
    cin>>n;
    cout<<endl;
    for(int i=0; i<n; ++i)
    {
        cin>>r1>>r2;
        cout<<r1%6+1+r2%6+1<<" ";
    }
    cout<<endl;
    return 0;
}
