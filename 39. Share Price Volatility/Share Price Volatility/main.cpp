//
//  main.cpp
//  Share Price Volatility
//
//  Created by Mikołaj Deja on 05/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    string names[n];
    int prices[n][14];
    for(int i=0; i<n; ++i)
    {
        cin>>names[i];
        for(int j=0; j<14; ++j)
            cin>>prices[i][j];
        double stdev=0, mean=0;
        for(int j=0; j<14; ++j)
            mean+=prices[i][j];
        mean/=14;
        for(int j=0; j<14; ++j)
            stdev+=pow(prices[i][j]-mean, 2);
        stdev=sqrt(stdev/14);
        if(stdev>=mean/25)
            cout<<names[i]<<" ";
    }
    cout<<endl;
}
