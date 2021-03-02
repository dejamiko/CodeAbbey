//
//  main.cpp
//  Binary Search
//
//  Created by Mikołaj Deja on 02/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double fun(double a, double b, double c, double d, double x)
{
    return a*x+b*sqrt(pow(x, 3))-c*exp(-x/50)-d;
}

int main(){
    int n;
    cin>>n;
    double a, b, c, d, x, p, r;
    for(int i=0; i<n; ++i)
    {
        p=100;
        r=0;
        x=(r+p/2);
        cin>>a>>b>>c>>d;
        for(int j=0; j<1000000; ++j)
        {
            x=(r+p)/2;
            if(fun(a, b, c, d, x)>0)
                p=x;
            else
                r=x;
        }
        cout<<setprecision(15)<<x<<" ";
        
    }
    cout<<endl;
    return 0;
}
