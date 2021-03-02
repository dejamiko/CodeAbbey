//
//  main.cpp
//  Square root
//
//  Created by Mikołaj Deja on 22/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n, x, N;
    double r;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        cin>>x>>N;
        r=1;
        for(int j=0; j<N; ++j)
        {
            r=(r+x/r)/2;
        }
        cout<<setprecision(11)<<r<<endl;
    }
    
}
