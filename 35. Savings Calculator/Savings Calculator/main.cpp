//
//  main.cpp
//  Savings Calculator
//
//  Created by Mikołaj Deja on 25/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, years;
    cin>>n;
    double s, r, p;
    cout<<endl;
    for(int i=0; i<n; ++i)
    {
        years=0;
        cin>>s>>r>>p;
        while(r>s)
        {
            years++;
            s=floor(s*(1+p/100)*100)/100;
        }
        cout<<years<<" ";
    }
    cout<<endl;
    return 0;
}
