//
//  main.cpp
//  Array Counters
//
//  Created by Mikołaj Deja on 20/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int tab[n], counters[m];
    memset(counters, 0, 4*m);
    for(int i=0; i<n; ++i)
        cin>>tab[i];
    for(int i=0; i<n; ++i)
        counters[tab[i]-1]++;
    for(int i=0; i<m; ++i)
        cout<<counters[i]<<" ";
    return 0;
}
