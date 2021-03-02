//
//  main.cpp
//  Arithmetic Progression
//
//  Created by Mikołaj Deja on 15/01/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int number, a, r, n;
    cin>>number;
    (void)getchar();
    for(int i=0; i<number; ++i)
    {
        cin>>a>>r>>n;
        cout<<endl<<n*(2*a+r*(n-1))/2;
    }
    return 0;
}
