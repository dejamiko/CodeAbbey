//
//  main.cpp
//  Sort with Indexes
//
//  Created by Mikołaj Deja on 22/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int tab[n][2], temp[n];
    for(int i=0; i<n; ++i)
    {
        cin>>tab[i][0];
        temp[i]=tab[i][0];
        tab[i][1]=i+1;
    }
    sort(temp, temp+n);
    
    for(int i=0; i<n; ++i)
        for(int j=0; j<n; ++j)
            if(tab[j][0]==temp[i])
                cout<<tab[j][1]<<endl;
    
    return 0;
}
