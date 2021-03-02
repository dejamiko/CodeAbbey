//
//  main.cpp
//  Cloud Altitude Measurement
//
//  Created by Mikołaj Deja on 12/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    double d, a, b;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        cin>>d>>a>>b;
        a=M_PI*a/180;
        b=M_PI*b/180;
        cout<<round((tan(a)*tan(b)*d)/(tan(b)-tan(a)))<<" ";
    }
    cout<<endl;
}
