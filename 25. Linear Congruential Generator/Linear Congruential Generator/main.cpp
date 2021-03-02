//
//  main.cpp
//  Linear Congruential Generator
//
//  Created by Mikołaj Deja on 25/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n, a, c, m, x0, N;
    cin>>n;
    cout<<endl;
    for(int i=0; i<n; ++i)
    {
        cin>>a>>c>>m>>x0>>N;
        for(int j=0; j<N; ++j)
            x0=(a*x0+c)%m;
        cout<<x0<<endl;
    }
    cout<<endl;
    return 0;
}
