//
//  main.cpp
//  Smoothing the Weather
//
//  Created by Mikołaj Deja on 24/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    double x[n], y[n];
    for(int i=0; i<n; ++i)
    {
        cin>>x[i];
        y[i]=x[i];
    }
    for(int i=1; i<n-1; ++i)
        y[i]=(x[i-1]+x[i+1]+x[i])/3;
    for(int i=0; i<n; ++i)
        cout<<setprecision(12)<<y[i]<<" ";
    cout<<endl;
    return 0;
}
