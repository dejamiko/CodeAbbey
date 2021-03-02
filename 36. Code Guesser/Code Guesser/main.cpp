//
//  main.cpp
//  Code Guesser
//
//  Created by Mikołaj Deja on 11/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int num(int guess, int ans, int len)
{
    int count=0;
    for(int i=0; i<len; ++i)
    {
        if(guess%10==ans%10)
            count++;
        guess/=10;
        ans/=10;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int guess[n], ans[n];
    for(int i=0; i<n; ++i)
    {
        cin>>guess[i]>>ans[i];
    }
    for(int j=0; j<10000; ++j)
    {
        bool yes=true;
        for(int k=0; k<n; ++k)
            if(num(guess[k], j, 4)!=ans[k])
                yes=false;
        if(yes)
        {
            cout<<j<<" ";
            break;
        }
    }
    cout<<endl;
}
