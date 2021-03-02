//
//  main.cpp
//  Collatz Sequence
//
//  Created by Mikołaj Deja on 20/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int collatz(int x, int count)
{
    if(x==1)
        return count;
    else
        if(x%2==0)
            return collatz(x/2, count+1);
        else
            return collatz(3*x+1, count+1);
}

int main(){
    int n, x;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        cin>>x;
        cout<<collatz(x, 0)<<" ";
    }
    return 0;
}
