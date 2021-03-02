//
//  main.cpp
//  Sum in loop
//
//  Created by Mikołaj Deja on 07/01/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int number, temp;
    long sum=0;
    cin>>number;
    for(int i=0; i<number; ++i)
    {
        cin>>temp;
        sum+=temp;
    }
    cout<<sum;
    return 0;
}
