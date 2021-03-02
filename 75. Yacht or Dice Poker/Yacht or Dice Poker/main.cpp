//
//  main.cpp
//  Yacht or Dice Poker
//
//  Created by Mikołaj Deja on 06/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

bool four(int * tab)
{
    if(tab[0]==tab[1] && tab[0]==tab[2] && tab[0]==tab[3])
        return true;
    if(tab[1]==tab[4] && tab[1]==tab[2] && tab[1]==tab[3])
        return true;
    return false;
}

bool three(int * tab)
{
    if(tab[0]==tab[1] && tab[0]==tab[2])
        return true;
    if(tab[1]==tab[2] && tab[1]==tab[3])
        return true;
    if(tab[2]==tab[3] && tab[2]==tab[4])
        return true;
    return false;
}

bool pai(int * tab)
{
    if(tab[0]==tab[1])
        return true;
    if(tab[1]==tab[2])
        return true;
    if(tab[2]==tab[3])
        return true;
    if(tab[4]==tab[3])
        return true;
    return false;
}

bool doublepair(int * tab)
{
    if(tab[0]==tab[1] && tab[2]==tab[3])
        return true;
    if(tab[0]==tab[1] && tab[3]==tab[4])
        return true;
    if(tab[1]==tab[2] && tab[3]==tab[4])
        return true;
    return false;
}

bool fullhouse(int * tab)
{
    if(tab[0]==tab[1] && tab[2]==tab[3] && tab[2]==tab[4])
        return true;
    if(tab[3]==tab[4] && tab[0]==tab[1] && tab[0]==tab[2])
        return true;
    return false;
}

int main(){
    int n, numbers[5];
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        bool con=true;
        for(int j=0; j<5; ++j)
            cin>>numbers[j];
        sort(numbers, numbers+5);
        
        if(numbers[0]==1 && numbers[1]==2 && numbers[2]==3 && numbers[3]==4 && numbers[4]==5 && con)
        {
            cout<<"small-straight ";
            con=false;
        }
        if(numbers[0]==2 && numbers[1]==3 && numbers[2]==4 && numbers[3]==5 && numbers[4]==6 && con)
        {
            cout<<"big-straight ";
            con=false;
        }
        
        if(numbers[1]==numbers[0] && numbers[2]==numbers[0] && numbers[3]==numbers[0] && numbers[4]==numbers[0] && con)
        {
            cout<<"yacht ";
            con=false;
        }
        
        if(four(numbers) && con)
        {
            cout<<"four ";
            con=false;
        }
        
        if(fullhouse(numbers) && con)
        {
            cout<<"full-house ";
            con=false;
        }
        
        if(doublepair(numbers) && con)
        {
            cout<<"two-pairs ";
            con=false;
        }
        
        if(three(numbers) && con)
        {
            cout<<"three ";
            con=false;
        }
        
        if(pai(numbers) && con)
        {
            cout<<"pair ";
            con=false;
        }
        if(con)
            cout<<"none ";
    }
    cout<<endl;
}
