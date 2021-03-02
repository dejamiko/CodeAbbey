//
//  main.cpp
//  Convex Polygon Area
//
//  Created by Mikołaj Deja on 13/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    double cor[n][2], area=0, avx=0, avy=0;
    cout<<endl;
    for(int i=0; i<n; ++i)
    {
        cin>>cor[i][0]>>cor[i][1];
        avx+=cor[i][0];
        avy+=cor[i][1];
    }
    
    avx/=n;
    avy/=n;
    
    for(int i=0; i<n-1; ++i)
        area+=0.5*abs((cor[i][0]-avx)*(cor[i+1][1]-avy)-(cor[i][1]-avy)*(cor[i+1][0]-avx));
    
    area+=0.5*abs((cor[0][0]-avx)*(cor[n-1][1]-avy)-(cor[0][1]-avy)*(cor[n-1][0]-avx));
    
    cout<<setprecision(12)<<area;
    return 0;
}
