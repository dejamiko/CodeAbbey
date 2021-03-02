//
//  main.cpp
//  Greatest Common Divisor
//
//  Created by Mikołaj Deja on 22/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if(a==b)
        return a;
    if(a>b)
        return gcd(b, a-b);
    else
        return gcd(a, b-a);
}


int main(){
    int n, a, b;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        cin>>a>>b;
        cout<<"("<<gcd(a, b)<<" "<<a*b/gcd(a, b)<<") ";
    }
}
