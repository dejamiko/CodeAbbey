//
//  main.cpp
//  Triangle Area
//
//  Created by Mikołaj Deja on 27/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    double x1, y1, x2, y2, x3, y3;
    cout<<endl;
    for(int i=0; i<n; ++i)
    {
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        cout<<setprecision(12)<<0.5*abs((x2-x1)*(y3-y1)-(y2-y1)*(x3-x1))<<endl;
    }
    cout<<endl;
    return 0;
}
