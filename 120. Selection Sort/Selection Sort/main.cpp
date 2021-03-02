//
//  main.cpp
//  Selection Sort
//
//  Created by Mikołaj Deja on 02/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n, index=0;
    cin>>n;
    int copy=n, max;
    int tab[n];
    for(int i=0; i<n; ++i)
        cin>>tab[i];
    for(int i=0; i<n; ++i)
    {
        max=0;
        for(int j=0; j<copy; ++j)
            if(max<tab[j])
            {
                max=tab[j];
                index=j;
            }
        cout<<index<<" ";
        swap(tab[index], tab[copy-1]);
        copy--;
        if(copy==1)
            break;
    }
    
    cout<<endl;
    return 0;
}
