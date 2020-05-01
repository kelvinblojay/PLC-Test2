#include <iostream>
using namespace std;

int main(){
    // Defining  Gender and Class
    int male = 1;
    int female = 0;
    int UPPER = 3;
    int MIDDLE = 2;
    int LOWER = 1;
    //Initializing Gender and Class
    int gender = male;
    int Class = LOWER;

    //Checking Gender and Class
    switch (gender) { 
    case 1:
        if(Class == 1){cout << "Gender is a lower Male\n";} 
        else if(Class ==2){cout << "Gender is a middle Male\n";} 
        else if(Class == 3){cout << "Gender is a upper Male\n";}
        break; 
    case 2: 
       if(Class == 1){cout << "Gender is a lower female\n";} 
        else if(Class ==2){cout << "Gender is a female Male\n";} 
        else if(Class == 3){cout << "Gender is a female Male\n";}
        break; 
    default: 
        cout << "Value can be Male or Female\n"; 
    } 
    return 0; 


}