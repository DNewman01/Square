#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a whole number between 1 and 20: ";
    unsigned int side{};
    cin >> side;
    if (side < 1 || side > 20) {
        cout << "I asked for a whole number between 1 and 20!!\nNow you have to restart.\nHit any key and rerun. " << endl;
        return 20;
    }
    unsigned int row{side};
    while (row >= 1) {
        unsigned int col{side};
        while (col >= 1) {
            // if printing the 1st column or the last column, print a "*"
            if (col == side || col == 1) {
                cout << " *";            // else if printing the 1st row or the last row, print a "*"
            } else if (row == side || row == 1) {
                cout << " *";
                // else just print a space
            } else {
                cout << "  ";
            }
            --col;
        }
        cout << endl;
        --row;
    }
}
