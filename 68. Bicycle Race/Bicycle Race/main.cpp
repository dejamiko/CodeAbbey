//
//  main.cpp
//  Bicycle Race
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
    double s, a, b;
    cout<<endl;
    for(int i=0; i<n; ++i)
    {
        cin>>s>>a>>b;
        cout<<setprecision(12)<<s*a/(a+b)<<" ";
    }
    cout<<endl;
    return 0;
}
