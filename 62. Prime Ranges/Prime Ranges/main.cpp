//
//  main.cpp
//  Prime Ranges
//
//  Created by Mikołaj Deja on 05/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int all[3000000];
int primes[200000];

void prim()
{
    all[0]=0;
    all[1]=0;
    for(int i=2; i<3000000; ++i)
        all[i]=i;
    for(int i=2; i<1733; ++i)
        for(int j=i+1; j<3000000; ++j)
            if(all[j]%i==0)
                all[j]=0;
    int j=0, i=0;
    while(j<200000)
    {
        while(all[i]==0)
            i++;
        
        primes[j]=all[i];
        j++;
        i++;
    }
}

int search(int p, int r, int x)
{
    int s=(p+r)/2;
    if(primes[s]==x)
        return s;
    else
        if(x<primes[s])
            return search(p, s, x);
        else
            return search(s, r, x);
}

int main(){
    prim();
    int n, a, b;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        cin>>a>>b;
        int j=search(0, 199999, a), counter=0;
        while(primes[j]<=b)
        {
            j++;
            counter++;
        }
        cout<<counter<<" ";
    }
    cout<<endl;
}
