#include <iostream>
using namespace std;
int main() {
    int sides;

    cout << "Enter num of sides on shape: ";
    cin>> sides;
    cout << "\nYour shape is a ";

    switch (sides) {
        case 0:
            cout << "No shape";
            break;

        case 1:
        cout << "Line";
            break;
        
        case 2: 
            cout << "2 lines";
            break;
        
        case 3: 
            cout << "Triangle";
            break;
        
        case 4: 
            cout << "quadrilateral";
            break;

        case 5:
            cout << "pentagon";
            break;
        case 6:
            cout << "hexagon";
            break;
        default:
            cout << "I DONT KNOW";
            break;
    }

    cout << endl;
}