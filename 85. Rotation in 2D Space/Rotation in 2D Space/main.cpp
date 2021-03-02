//
//  main.cpp
//  Rotation in 2D Space
//
//  Created by Mikołaj Deja on 16/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    double coord[n][2], deg, r, alpha, beta, gamma;
    int cor[n][2];
    string names[n];
    cin>>deg;
    cout<<endl;
    deg=deg*M_PI/180;
    for(int i=0; i<n; ++i)
    {
        cin>>names[i]>>coord[i][0]>>coord[i][1];
        r=sqrt(pow(coord[i][0],2)+pow(coord[i][1],2));
        alpha=asin(coord[i][1]/r)*180/M_PI;
        beta=acos(coord[i][0]/r)*180/M_PI;
        if(alpha>0 && alpha<90 && beta>0 && beta<90)
            gamma=alpha;
        if(alpha>0 && alpha<90 && beta>90)
            gamma=beta;
        if(alpha<0 && alpha>-90 && beta>0 && beta<90)
            gamma=360+alpha;
        if(alpha<0 && alpha>-90 && beta>90)
            gamma=360-beta;
        gamma=gamma*M_PI/180;
        coord[i][1]=r*sin(gamma+deg);
        coord[i][0]=r*cos(gamma+deg);
        cor[i][0]=round(coord[i][0]);
        cor[i][1]=round(coord[i][1]);
    }
    
    for(int i=0; i<n; ++i)
        for(int j=0; j<n-1; ++j)
            if(cor[j][1]<cor[j+1][1])
            {
                swap(cor[j], cor[j+1]);
                swap(names[j], names[j+1]);
            }
    
    for(int i=0; i<n; ++i)
        for(int j=0; j<n-1; ++j)
            if(cor[j][0]<cor[j+1][0] && cor[j][1]==cor[j+1][1])
            {
                swap(cor[j], cor[j+1]);
                swap(names[j], names[j+1]);
            }
            
    for(int i=n-1; i>=0; --i)
        cout<<names[i]<<" ";
    
    cout<<endl;
    return 0;
}
