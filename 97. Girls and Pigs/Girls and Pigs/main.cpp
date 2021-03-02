//
//  main.cpp
//  Girls and Pigs
//
//  Created by Mikołaj Deja on 15/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double n, legs, breasts, pigs, girls;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        int counter=0;
        cin>>legs>>breasts;
        for(int j=0; j<legs/2; j++)
        {
            girls=j;
            pigs=(legs-girls*2)/4;
            if((int)((breasts-girls*2)/pigs)%2==0 && (breasts-girls*2)/pigs==floor((breasts-girls*2)/pigs) && pigs==floor(pigs) && girls!=0 && pigs!=0)
                counter++;
        }
        cout<<counter<<" ";
    }
    cout<<endl;
    return 0;
}
