//program to check whether a given number is odd or even
// including required header files
#include <iostream>
using namespace std;

// main function
int main(){
    // input a number from user
    int input;

    cout<<"Enter a number: "<<endl;
    cin>>input;

    // checking weather the number is a even or odd
    if (input == 0) {
        cout << input << "is neither even nor odd" << endl;
    } else if ( input %2 == 0){
        cout << input << " is even!"<<endl;
    }
    else {
        cout << input << " is odd!"<<endl;
    }

    return 0;

}
