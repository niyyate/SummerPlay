/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Niyya
 *
 * Created on July 26, 2016, 2:07 PM
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main() {
    cout << setprecision(3);
    cout << "X      Y"<< endl;
    cout<<"---------\n";
    
    for (int x=-2;x <= 3;x++)
                  
    {
    double top = (pow(x, 3.0)-(3*x)+108);
    
    double in = (13*(pow(x,2.0))+1);
    
    double bott= (pow(in, .5) + 6 * abs(x-2.5));
    
    double y = top/bott;
    
  
    const int Width = 6;
   
   
    cout << left << setw(Width)  << x;
    cout << setw(Width) << y;
    cout << endl;
   
    
   
    }
    return 0;
}

