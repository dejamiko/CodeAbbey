//
//  main.cpp
//  Sums in loops
//
//  Created by Mikołaj Deja on 07/01/2020.
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
        cout<<endl<<a+b;
    }
    cout<<endl;
    return 0;
}
