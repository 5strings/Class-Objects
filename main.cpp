//
//  main.cpp
//  Objects
//
//  Created by Eun Jae Lee on 4/12/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//
//  syntax, logic, memory alocation

#include <iostream>
using namespace std;

class one {private: // private or public
    
    int a;
    float b;
    
           public:
    void first();
    
    float second(float x);
    
};

void one :: first(){
    cin>>a>>b;
}

float one :: second(float x){
    b = (b+x)*a;
    return b;
}


int main() {
    
    cout<<"Enter two numbers for multiplication: \n";
    
    one obj;
    obj.first();
    
    float c;
    c = obj.second(10.5);
    
    cout<<c;
    
    //system("pause");
}
