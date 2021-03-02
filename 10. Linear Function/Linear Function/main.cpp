//
//  main.cpp
//  Linear Function
//
//  Created by Mikołaj Deja on 20/04/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n, x1, y1, x2, y2;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        cin>>x1>>y1>>x2>>y2;
        cout<<"("<<(y2-y1)/(x2-x1)<<" "<<y1-x1*(y2-y1)/(x2-x1)<<")\n";
    }
    return 0;
}
