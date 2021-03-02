//
//  main.cpp
//  Mortgage Calculator
//
//  Created by Mikołaj Deja on 03/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    double p, r, l, M, t;
    cin>>p>>r>>l;
    t=p;
    for(int m=t/l; m<t; m++)
    {
        p=t;
        for(int i=0; i<l; ++i)
            p=p+p*r/1200-m;
        M=m;
        if(p<=0)
            break;
    }
    cout<<M;
    cout<<endl;
    return 0;
}
