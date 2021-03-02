//
//  main.cpp
//  Dice rolling
//
//  Created by Mikołaj Deja on 24/01/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int number;
    double value;
    cin>>number;
    (void)getchar();
    for(int i=0; i<number; ++i)
    {
        cin>>value;
        value*=6;
        cout<<endl<<(int)value+1;
    }
    return 0;
}
