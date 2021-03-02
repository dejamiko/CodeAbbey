//
//  main.cpp
//  Clock Hands
//
//  Created by Mikołaj Deja on 11/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int n;
    double x1, y1, x2, y2, r1=6, r2=9, ho, min;
    string hour, minute;
    cin>>n;
    getline(cin, minute);
    for(int i=0; i<n; ++i)
    {
        x1=10;
        y1=10;
        x2=10;
        y2=10;
        getline(cin, hour, ':');
        getline(cin, minute, ' ');
        min=minute[1]-48+10*(minute[0]-48);
        ho=(hour[1]-48+10*(hour[0]-48))%12+min/60;
        x1+=r1*cos(M_PI*(90-360*ho/12)/180);
        y1+=r1*sin(M_PI*(90-360*ho/12)/180);
        x2+=r2*cos(M_PI*(90-360*min/60)/180);
        y2+=r2*sin(M_PI*(90-360*min/60)/180);
        cout<<setprecision(12)<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<" ";
    }
    cout<<endl;
}
