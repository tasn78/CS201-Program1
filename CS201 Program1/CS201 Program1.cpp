// CS201 Program1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
#include <string>
using namespace std;

bool isBin(string inValue) {
    return inValue.find_first_not_of("01") == string::npos;          // Code provided in class, CS201 1/24/2023
}
bool isHex(string inValue) {
    return inValue.find_first_not_of("0123456789ABCDEF") == string::npos;         // Code provided in class, CS201 1/24/2023
}
int value(string str) {
    if (str == "0") return stoi(str);
    else if (str == "1") return stoi(str);
    else if (str == "2" || str == "3" || str == "4" || str == "5" || str == "6" || str == "7" || str == "8" || str == "9") return stoi(str);
    else if (str == "A") return 10;
    else if (str == "B") return 11;
    else if (str == "C") return 12;
    else if (str == "D") return 13;
    else if (str == "E") return 14;
    else if (str == "F") return 15;
    else if (str == "G") return 16;
}
    // if (inValuePos == 1 || inValue Pos == 2...inValuePos == 9
    // return stoi(inValuePos);
    // if (inValuePos == "A") return 10



int main()
{
    string inValue;
    int base1 = 2, decValue, tempValue, outValue = 0, powerBase = 1;

    cout << "Please enter a number: ";
    cin >> inValue;
    cout << "Please enter the base: ";


    if (isBin(inValue)) {
        cout << "inValue: " << inValue << " is valid\n";
    }
    else
        cout << "inValue: " << inValue << " is NOT valid\n";

    if (base1 == 2) {

        if (isBin(inValue)) {
            decValue = stoi(inValue);               // stoi = string to integer
            while (decValue > 0) {
                tempValue = decValue % 10;
                //tempValue = value (inValue[i])
                outValue = outValue + tempValue * powerBase;
                powerBase *= base1;
                decValue /= 10;
            }
            cout << inValue << " converted to base " << base1 << " is " << outValue << endl;
        }
        else
            cout << "inValue: " << inValue << " is NOT valid\n";
    }

    if (base1 > 9) {
        if (isHex(inValue)) {
        for (unsigned int i = inValue.length() - 1; i <= 0; i--) {
            decValue - value(inVal.substr(i, 1));
            outValue += decValue * powerBase;
            powerBase += base1;
        }

    }
}
        //FOR I length of inVal to 0
        //   look for inVal[i] and calculate the value
        //    SET decValue  = inVal[i] value
        //    outVal = outVal + digit * base1
        //    powerBase = powerBase * base1


}





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
