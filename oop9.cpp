#include <iostream>
#include "class.h"

int main() {
    double sumtax = 0;
    Property* arr[7];

    for (int i = 0; i < 7; i++) {
        
        if (i < 3) {
            arr[i] = new Apartment(rand() % 1000 + 1000);
        }

        else if (i < 5) {
        arr[i] = new Car(rand() % 1000 + 1000);
        }

        else {
            arr[i] = new CountryHouse(rand() % 1000 + 1000);
        }
    };

    for (int i = 0; i < 7; i++) {
        cout <<i+1<<"   "<< arr[i]->tax() << endl;
        sumtax += arr[i]->tax();

    }
    cout <<"sum tax = " << sumtax;

    for (int i = 0; i < 7; i++) {
        delete arr[i];
    }
    return 0;
}