//
//  main.cpp
//  Bubble in Array
//
//  Created by Mikołaj Deja on 22/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

long long int checksum(int number, int * tab)
{
    long long int result=0;
    for(int i=0; i<number; ++i)
    {
        result+=tab[i];
        result*=113;
        result=result%10000007;
    }
    return result;
}

int main(){
    int n, swaps=0, t, x, i=0;
    int tab[100];
    cin>>x;
    while(x!=-1)
    {
        tab[i]=x;
        cin>>x;
        i++;
    }
    n=i;
    for(int i=0; i<n-1; ++i)
        if(tab[i]>tab[i+1])
        {
            swaps++;
            t=tab[i];
            tab[i]=tab[i+1];
            tab[i+1]=t;
        }
    cout<<swaps<<" "<<checksum(n, tab)<<endl;
    return 0;
}
