//
//  main.cpp
//  Body Mass Index
//
//  Created by Mikołaj Deja on 16/01/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int number;
    float bmi, height, weight;
    cin>>number;
    (void)getchar();
    for(int i=0; i<number; ++i)
    {
        cin>>weight>>height;
        bmi=weight/(height*height);
        if (bmi>=25)
        {
            if(bmi>=30)
            {
                cout<<"obese\n";
            } else {
                cout<<"over\n";
            }
            
        } else {
            if(bmi<18.5)
            {
                cout<<"under\n";
            } else {
            cout<<"normal\n";
            }
        }
    }
    return 0;
}
