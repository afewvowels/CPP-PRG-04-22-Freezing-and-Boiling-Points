//
//  main.cpp
//  PRG-4-22-Freezing-and-Boiling-Points
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  The following table lists the freezing and boiling points of several substances. Write a
//  program that asks the user to enter a temperature then shows all the substances that
//  will freeze at that temperature, and all that will boil at that temperature. For example, if
//  the user enters -20, the program should report that water will freeze and oxygen will
//  boil at that temperature.
//
//  Substance               Freezing Point(F)               Boiling Point(F)
//  ------------------------------------------------------------------------
//  Ethyl alcohol           -173                            172
//  Mercury                 -38                             676
//  Oxygen                  -362                            -306
//  Water                   32                              212

#include <iostream>

using namespace std;

int main()
{
    int intUserTemperature;
    
    const int INT_ETHYL_ALCOHOL_FREEZING = -173,
              INT_ETHYL_ALCOHOL_BOILING = 172,
    
              INT_MERCURY_FREEZING = -38,
              INT_MERCURY_BOILING = 676,
    
              INT_OXYGEN_FREEZING = -362,
              INT_OXYGEN_BOILING = -306,
    
              INT_WATER_FREEZING = 32,
              INT_WATER_BOILING = 212;
    
    cout << "Please enter a temperature(-1000F - 1000F):\n";
    cin >> intUserTemperature;
    while(!cin || intUserTemperature < -1000 || intUserTemperature > 1000)
    {
        cout << "Enter a temperature between -1000F and 1000F:\n";
        cin.clear();
        cin.ignore();
        cin >> intUserTemperature;
    }
    
    //Define first case, if intUserTemperature is lower than the freezing point
    if(intUserTemperature <= INT_ETHYL_ALCOHOL_FREEZING)
    {
        cout << "Ethyl Alcohol: FROZEN\n";
    }
    //Define second case, if intUserTemperature is higher than the boiling point
    else if(intUserTemperature >= INT_ETHYL_ALCOHOL_BOILING)
    {
        cout << "Ethyl Alcohol: BOILING\n";
    }
    //Define null third case for all values between freezing and boiling
    else
    {
        
    }
    
    if(intUserTemperature <= INT_MERCURY_FREEZING)
    {
        cout << "Mercury: FROZEN\n";
    }
    else if(intUserTemperature >= INT_MERCURY_BOILING)
    {
        cout << "Mercury: BOILING\n";
    }
    else
    {
        
    }
    
    if(intUserTemperature <= INT_OXYGEN_FREEZING)
    {
        cout << "Oxygen: FROZEN\n";
    }
    else if(intUserTemperature >= INT_OXYGEN_BOILING)
    {
        cout << "Oxygen: BOILING\n";
    }
    else
    {
        
    }
    
    if(intUserTemperature <= INT_WATER_FREEZING)
    {
        cout << "Water: FROZEN\n";
    }
    else if(intUserTemperature >= INT_WATER_BOILING)
    {
        cout << "Water: BOILING\n";
    }
    else
    {
        
    }
    
    return 0;
}


