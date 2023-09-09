#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";


    

 int inputInt;
    double inputDouble;
    string inputString;
    cin>>inputInt;
    cin>>inputDouble;
    cin.ignore();
    getline(cin, inputString);
    int sumInt = i + inputInt;
    double sumDouble = d+ inputDouble;
    cout<<sumInt<<endl;
    cout<<fixed<<setprecision(1)<<sumDouble<<endl;
    cout<<s+inputString<<endl;

    
    

    return 0;
}