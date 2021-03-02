//
//  main.cpp
//  Neumann's Random Generator
//
//  Created by Mikołaj Deja on 23/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, number, copy[100];
    cin>>n;
    memset(copy, 0, 100*4);
    for(int i=0; i<n; ++i)
    {
        cin>>number;
        copy[0]=number;
        int j=0;
        bool newnum=true;
        while(newnum)
        {
            j++;
            copy[j]=((int)pow(number, 2)/100)%10000;
            number=((int)pow(number, 2)/100)%10000;
            for(int k=0; k<j; ++k)
                if(copy[k]==number)
                    newnum=false;
        }
        cout<<j<<endl;
    }
    return 0;
}
