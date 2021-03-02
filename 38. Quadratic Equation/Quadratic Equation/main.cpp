//
//  main.cpp
//  Quadratic Equation
//
//  Created by Mikołaj Deja on 30/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, a, b, c;
    cin>>n;
    cout<<endl;
    for(int i=0; i<n; ++i)
    {
        cin>>a>>b>>c;
        if(pow(b, 2)-4*a*c>=0)
            if(a>0)
                cout<<(-b+sqrt(pow(b, 2)-4*a*c))/(2*a)<<" "<<(-b-sqrt(pow(b, 2)-4*a*c))/(2*a)<<"; ";
            else
                cout<<(-b-sqrt(pow(b, 2)-4*a*c))/(2*a)<<" "<<(-b+sqrt(pow(b, 2)-4*a*c))/(2*a)<<"; ";
        else
            if(a>0)
                cout<<(-b)/(2*a)<<"+"<<sqrt(-(pow(b, 2)-4*a*c))/(2*a)<<"i "<<(-b)/(2*a)<<"-"<<sqrt(-(pow(b, 2)-4*a*c))/(2*a)<<"i; ";
            else
                cout<<(-b)/(2*a)<<"i"<<sqrt(-(pow(b, 2)-4*a*c))/(2*a)<<"i "<<(-b)/(2*a)<<"+"<<sqrt(-(pow(b, 2)-4*a*c))/(2*a)<<"i; ";
    }
    return 0;
}
