//
//  main.cpp
//  Maximum of array
//
//  Created by Mikołaj Deja on 09/01/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;
 
int main(){
    long int a, max, min;
    cin>>a;
    min=a;
    max=a;
    for(int i=1; i<300; ++i)
    {
        cin>>a;
        if(a<min)
            min=a;
        if(a>max)
            max=a;
    }
    cout<<max<<" "<<min;
    return 0;
}
