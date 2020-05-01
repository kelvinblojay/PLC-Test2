#include <iostream>
using namespace std;
int main() 
{ 
    // Defining enum Gender and Class
    enum Gender { Male, 
                  Female }; 
    enum Class {
        LOWER,MIDDLE,UPPER
    };
  
    // Creating Gender  and Class type variable 
    Gender gender = Male; 
    Class c = LOWER;

    //Checking Gender and Class
    switch (gender) { 
    case Male: 
        if(c== LOWER){cout << "Gender is lower class Male\n"; }   
        else if(c==MIDDLE){cout <<"Gender is middle class Male\n";}     
        else{cout<<"Gender is a higher class Male\n";}  
        break; 
    case Female: 
        if(c== LOWER){cout << "Gender is lower class female\n"; }   
        else if(c==MIDDLE){cout <<"Gender is middle class female\n";}     
        else{cout<<"Gender is a higher class female\n";}  
        break; 
    default: 
        cout << "Value can be Male or Female\n"; 
    } 
    return 0; 
} 
