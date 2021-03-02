//
//  main.cpp
//  Insertion Sort
//
//  Created by Mikołaj Deja on 10/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n, t, j;
    cin>>n;
    int tab[n];
    for(int i=0; i<n; ++i)
    {
        cin>>tab[i];
    }
    for(int i=1; i<n; ++i)
    {
        int count=0;
        t=tab[i];
        j=i-1;
        while(j>=0 && tab[j]>t)
        {
            tab[j+1]=tab[j];
            --j;
            count++;
        }
        tab[j+1]=t;
        cout<<count<<" ";
    }
    
    cout<<endl;
}
