//
//  main.cpp
//  Pythagorean Theorem
//
//  Created by Mikołaj Deja on 24/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, a, b, c;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        cin>>a>>b>>c;
        if(pow(a, 2)+pow(b, 2)>pow(c, 2))
            cout<<"A ";
        else if(pow(a, 2)+pow(b, 2)<pow(c, 2))
            cout<<"O ";
        else
            cout<<"R ";
    }
    return 0;
}
