//
//  main.cpp
//  Prime Number Generations
//
//  Created by Mikołaj Deja on 28/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;
int all[3000000];

int main(){
    int primes[200000];
    all[0]=0;
    all[1]=0;
    for(int i=2; i<3000000; ++i)
        all[i]=i;
    for(int i=2; i<1733; ++i)
        for(int j=i+1; j<3000000; ++j)
            if(all[j]%i==0)
                all[j]=0;
    int j=0, i=0, n, k;
    while(j<200000)
    {
        while(all[i]==0)
            i++;
        
        primes[j]=all[i];
        j++;
        i++;
    }
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        cin>>k;
        cout<<primes[k-1]<<" ";
    }
}
