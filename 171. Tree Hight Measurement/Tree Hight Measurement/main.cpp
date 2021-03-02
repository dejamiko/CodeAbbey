//
//  main.cpp
//  Tree Hight Measurement
//
//  Created by Mikołaj Deja on 07/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    double d, b;
    for(int i=0; i<n; ++i)
    {
        cin>>d>>b;
        cout<<round(d*tan(b*M_PI/180-M_PI/2))<<" ";
    }
    cout<<endl;
}
