#include <iostream>
#include <cstdlib>  
using namespace std;

int main() {
    int minvalue, maxvalue;  

    cout << "Enter min value: ";
    cin >> minvalue;
    cout << "Enter max value: ";
    cin >> maxvalue;

    int dice1 = (rand() % (maxvalue - minvalue + 1)) + minvalue;
    int dice2 = (rand() % (maxvalue - minvalue + 1)) + minvalue;

    cout << "Dice1: " << dice1 << endl;
    cout << "Dice2: " << dice2 << endl;

    return 0;
}
