#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout<< "Write your 2 numbers you want to compare here." << endl;
    cin>> a >> b;
    if (a > b) {
    cout<< "A is greater than B." << endl;
    }
    if (a < b) {
    cout<< "A is smaller than B." << endl;
    }
    if (a == b) {
        cout<< "A is equal to B." << endl;
    }
    return 0;

}
