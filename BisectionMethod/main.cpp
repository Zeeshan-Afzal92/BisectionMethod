//
//  main.cpp
//  BisectionMethod
//
//  Created by Zeeshan Afzal on 03/05/2015.
//  Copyright (c) 2015 EagleSoft. All rights reserved.
//

#include<iostream>
#include<math.h>
using namespace std;

float f (float x)
{
    float fx1;
    fx1 = (x * cos(x)) - (2 * pow(x, 2)) + (3 * x) - 1;
   // fx1 = pow(x,3) - (7 * pow(x,2)) + (14 * x) - 6;
    return (fx1);
}

int main()
{
    float x1,x2,x3;
    int count = 0;
    int iteration = 0;
    int iter;
    
    cout <<"Enter x1 = ";
    cin >> x1;
    cout <<"Enter x2 = ";
    cin >> x2;
    cout <<"Enter number of iterations = ";
    cin >> iter;
    
   
    do
    {
        iteration++;
        x3 = (x1 + x2)/2;
        
        cout <<"Iteration # "<<iteration<<"  |  x1=" << x1 <<"  |  x2="<< x2 <<"  |  x3=" << x3 <<"  |  " << "  f(x1)=" << f(x1) << "  |   f(x2)=" << f(x2) << "  |   f(x3)=" << f(x3) << endl << endl;
        
        
        if( f(x1) * f(x3) < 0 )
        {
            x2 = x3;
        }
        else
        {
            x1 = x3;
        }
        count++;
    }while ( f(x3) == 0 || count!= iter);
    
    return 0;
    
}