//
//  main.cpp
//  King and Queen
//
//  Created by Mikołaj Deja on 02/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string poskin[n], posque[n];
    int pos[8][8];
    for(int i=0; i<n; ++i)
        cin>>poskin[i]>>posque[i];
    
    for(int i=0; i<n; ++i)
    {
        int index1=0, index2=0;
        
        for(int j=0; j<n; ++j)
            for(int m=0; m<n; ++m)
                pos[j][m]=0;
        
        for(int j=0; j<8; ++j)
            pos[posque[i][0]-97][j]++;
        for(int j=0; j<8; ++j)
            pos[j][posque[i][1]-49]++;
        for(int j=0; j<8; ++j)
            for(int m=0; m<8; ++m)
                if(pos[j][m]==2)
                {
                    index1=j;
                    index2=m;
                }
        for(int j=1; j<8-index1 && j<8-index2; ++j)
            pos[index1+j][index2+j]++;
        for(int j=1; j<8-index1 && j<=index2; ++j)
            pos[index1+j][index2-j]++;
        for(int j=1; j<=index1 && j<=index2; ++j)
            pos[index1-j][index2-j]++;
        for(int j=1; j<=index1 && j<8-index2; ++j)
            pos[index1-j][index2+j]++;
        
        if(pos[poskin[i][0]-97][poskin[i][1]-49]==0)
            cout<<"N ";
        else
            cout<<"Y ";
    }
    cout<<endl;
    return 0;
}
