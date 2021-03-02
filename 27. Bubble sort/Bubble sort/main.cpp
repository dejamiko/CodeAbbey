//
//  main.cpp
//  Bubble sort
//
//  Created by Mikołaj Deja on 21/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int swaps=0, rounds=0, n, t;
    bool cont=true;
    cin>>n;
    int tab[n];
    for(int i=0; i<n; ++i)
        cin>>tab[i];
    for(int j=0; j<n && cont; ++j)
    {
        cont=false;
        for(int i=0; i<n-1; ++i)
        {
            if(tab[i]>tab[i+1])
            {
                t=tab[i];
                tab[i]=tab[i+1];
                tab[i+1]=t;
                swaps++;
                cont=true;
            }
        }
        rounds++;
    }
    cout<<rounds<<" "<<swaps<<endl;
}
