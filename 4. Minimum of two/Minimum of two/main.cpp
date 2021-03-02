//
//  main.cpp
//  Minimum of two
//
//  Created by Mikołaj Deja on 09/01/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int number, a, b;
    cin>>number;
    for(int i=0; i<number; ++i)
    {
        cin>>a>>b;
        if(a<b)
        {
            cout<<a<<endl;
        } else {
            cout<<b<<endl;
        }
    }
    return 0;
}
