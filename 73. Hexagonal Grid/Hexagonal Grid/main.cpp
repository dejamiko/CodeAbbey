//
//  main.cpp
//  Hexagonal Grid
//
//  Created by Mikołaj Deja on 13/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int n;
    double x, y;
    cin>>n;
    string dir;
    for(int i=0; i<n; ++i)
    {
        cin>>dir;
        x=0;
        y=0;
        for(int j=0; j<dir.size(); ++j)
        {
            switch (dir[j]) {
                case 'A':
                    x+=1;
                    break;
                    
                case 'B':
                    x+=0.5;
                    y+=sqrt(3)/2;
                    break;
                    
                case 'C':
                    x-=0.5;
                    y+=sqrt(3)/2;
                    break;
                    
                case 'D':
                    x-=1;
                    break;
                    
                case 'E':
                    x-=0.5;
                    y-=sqrt(3)/2;
                    break;
                    
                case 'F':
                    x+=0.5;
                    y-=sqrt(3)/2;
                    break;
                    
                default:
                    break;
            }
        }
        cout<<setprecision(12)<<sqrt(pow(x, 2)+pow(y, 2))<<" ";
    }
    cout<<endl;
}
