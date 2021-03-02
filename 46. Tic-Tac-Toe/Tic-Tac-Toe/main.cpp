//
//  main.cpp
//  Tic-Tac-Toe
//
//  Created by Mikołaj Deja on 04/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

bool win(int * temp)
{
    int winning[8][3]={{1,2,3}, {4,5,6}, {7,8,9}, {1,4,7}, {2,5,8}, {3,6,9}, {1,5,9}, {3,5,7}};
    sort(temp, temp+3);
    for(int i=0; i<8; ++i)
    {
        bool same=true;
        for(int m=0; m<3; ++m)
            if(temp[m]!=winning[i][m])
            {
                same=false;
                break;
            }
        if(same)
            return true;
    }
    return false;
}

int main(){
    int n;
    int game[9], temp[3], cross[5], nought[4];
    cin>>n;
    cout<<endl;
    for(int i=0; i<n; ++i)
    {
        bool cont=true;
        for(int j=0; j<9; ++j)
            cin>>game[j];
        for(int j=0; j<5; ++j)
        {
            cross[j/2]=game[j];
            j++;
            nought[j/2]=game[j];
        }
        for(int j=4; j<9; ++j)
        {
            if(j%2==0)
            {
                cross[j/2]=game[j];
                for(int m=0; m<=j/2 && cont; ++m)
                {
                    for(int k=m+1; k<=j/2 && cont; ++k)
                    {
                        for(int l=k+1; l<=j/2 && cont; ++l)
                        {
                            temp[0]=cross[m];
                            temp[1]=cross[k];
                            temp[2]=cross[l];
                            if(win(temp))
                            {
                                cout<<j+1<<" ";
                                cont=false;
                            }
                        }
                    }
                }
            }
            else
            {
                nought[j/2]=game[j];
                for(int m=0; m<=j/2 && cont; ++m)
                {
                     for(int k=m+1; k<=j/2 && cont; ++k)
                    {
                        for(int l=k+1; l<=j/2 && cont; ++l)
                        {
                            temp[0]=nought[m];
                            temp[1]=nought[k];
                            temp[2]=nought[l];
                            if(win(temp))
                            {
                                cout<<j+1<<" ";
                                cont=false;
                            }
                        }
                    }
                }
            }
        }
        if(cont)
            cout<<0<<" ";
    }
    cout<<endl;
    return 0;
}
