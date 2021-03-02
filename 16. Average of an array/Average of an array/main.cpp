//
//  main.cpp
//  Average of an array
//
//  Created by Mikołaj Deja on 24/01/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int number=0, input=0;
    double sum=0, elem=0, a=0;
    cin>>number;
    (void)getchar();
    for(int i=0; i<number; ++i)
    {
        cin>>input;
        sum=0;
        elem=0;
        while(input) //when input is not 0
        {
            sum+=input;
            cin>>input;
            elem++;
        }
        a=sum/elem;
        int temporary = (int)a;
        if(a>=0)
        {
            if(temporary+1-a<=a-temporary)
            {
                cout<<temporary+1<<endl;
            } else {
                cout<<temporary<<endl;
            }
        } else {
            if(temporary-1-a>=a-temporary)
            {
                cout<<temporary-1<<endl;
            } else {
                cout<<temporary<<endl;
            }
        }
    }
    return 0;
}
