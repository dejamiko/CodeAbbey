//
//  main.cpp
//  Weighted sum of digits
//
//  Created by Mikołaj Deja on 16/01/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int number, d;
    cin>>number;
    (void)getchar();
    for(int i=1; i<number+1; ++i)
    {
        cin>>d;
        int sum=0;
        int tab[10];
        int k=0;
        while(d>=1)
        {
            tab[k]=d%10;
            ++k;
            d/=10;
        }
        for(int j=k, m=1; j>=0; --j, ++m)
        {
            sum+=m*tab[j-1];
        }
        cout<<endl<<sum;
    }
    return 0;
}
