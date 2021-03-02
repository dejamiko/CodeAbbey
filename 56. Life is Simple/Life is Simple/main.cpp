//
//  main.cpp
//  Life is Simple
//
//  Created by Mikołaj Deja on 15/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    int pos[15][17];
    string line;
    
    for(int i=0; i<15; ++i)
        for(int j=0; j<17; ++j)
            pos[i][j]=0;
    
    for(int i=0; i<5; ++i)
    {
        getline(cin, line);
        for(int j=0; j<7; ++j)
            if(line[j]=='X')
                pos[i+5][j+5]=1;
    }
    
    for(int k=0; k<5; k++)
    {
        for(int i=0; i<15; ++i)
        {
            for(int j=0; j<17; ++j)
            {
                int counter=0;
                if((pos[i-1][j]==1 || pos[i-1][j]==2) && i>0)
                    counter++;
                if((pos[i-1][j+1]==1 || pos[i-1][j+1]==2) && i>0 && j<16)
                    counter++;
                if((pos[i-1][j-1]==1 || pos[i-1][j-1]==2) && i>0 && j>0)
                    counter++;
                if((pos[i][j+1]==1 || pos[i][j+1]==2) && j<16)
                    counter++;
                if((pos[i][j-1]==1 || pos[i][j-1]==2) && j>0)
                    counter++;
                if((pos[i+1][j-1]==1 || pos[i+1][j-1]==2) && i<14 && j>0)
                    counter++;
                if((pos[i+1][j]==1 || pos[i+1][j]==2) && i<14)
                    counter++;
                if((pos[i+1][j+1]==1 || pos[i+1][j+1]==2) && i<14 && j<16)
                    counter++;
                if((counter>3 || counter<2) && pos[i][j]==1)
                    pos[i][j]=2;
                if(counter==3 && pos[i][j]==0)
                    pos[i][j]=3;
            }
        }
        
        int lives=0;
        
        for(int i=0; i<15; ++i)
            for(int j=0; j<17; ++j)
            {
                if(pos[i][j]==2)
                    pos[i][j]=0;
                if(pos[i][j]==3)
                    pos[i][j]=1;
            }
        
        for(int i=0; i<15; ++i)
            for(int j=0; j<17; ++j)
                if(pos[i][j]==1)
                    lives++;
        
        cout<<lives<<" ";
    }
    
    cout<<endl;
    return 0;
}
