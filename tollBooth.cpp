#include <iostream>

using namespace std;

class toolBooth {

    private:
        unsigned int carTotal;
        double tollTotal;

    public:
        toolBooth () {
            carTotal = 0;
            tollTotal = 0;
            cout << "\n--------------------------------" << endl;
            cout << "|  Welcome to G_pay tollBooth   |" << endl; 
            cout << "--------------------------------\n" << endl;
        }

        void payingCar () {
            carTotal += 1;
            tollTotal += 0.5;
        }

        void nopayingCar () {
            carTotal += 1;
        }

        void display() {
            cout << "Car total: " << carTotal << endl;
            cout << "Toll total: " << tollTotal << endl;
        }


};

int main () {

    toolBooth tb;
    char key;

    cout << "Press 'a' to count a paying car or 'b' to count a non-paying car" << endl;
    cout << "Press 'q' to display results " << endl; 

    while (true) {

        cin  >> key;

        if ( (key == 'a') || (key == 'A') ) {
            tb.payingCar();
        }

        else if ( (key == 'b') || (key == 'B') ) {
            tb.nopayingCar();
        }

        else if ( (key == 'q') || (key == 'Q') ) {
            tb.display();
            break;
        }

        else {
            break ;
        }
    }

    return 0;
}