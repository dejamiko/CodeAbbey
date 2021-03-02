//
//  main.cpp
//  Vowel count
//
//  Created by Mikołaj Deja on 15/01/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int number;
    char letter;
    cin>>number;
    (void)getchar();
    for(int i=0; i<number; ++i)
    {
        int counter = 0;
        do
        {
            letter=getchar();
            if(letter=='a' || letter=='e' || letter=='o' || letter=='u' || letter=='y' || letter=='i')
                counter++;
        }
        while(letter!='\n');
        cout<<counter<<endl;
    }
    return 0;
}
