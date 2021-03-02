//
//  main.cpp
//  Duel Chances
//
//  Created by Mikołaj Deja on 11/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    double temp, pa, pb, pwin;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        cin>>pa>>pb;
        pwin=pa;
        temp=1;
        for(int j=0; j<10000; ++j)
        {
            temp*=(100-pb)*(100-pa)/10000;
            pwin+=temp*pa;
        }
        cout<<round(pwin)<<" ";
    }
    cout<<endl;
}
