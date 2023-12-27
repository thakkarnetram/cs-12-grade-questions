#include <iostream>

using namespace std;

//*Control Statements*/

// IF ELSE
int greatestOfTwoNumbers() {
    cout << "A program that will print the greatest of two numbers. " << endl;
    int num1, num2;
    cin >> num1 >> num2;
    if (num1 > num2)
        cout << " The greatest number is -" << num1 << endl;
    else
        cout << " The greatest number is - " << num2 << endl;
    return 0;
}

// MULTIPLE IF ELSE
int multipleIfElseGreatestOfThreeNum() {
    cout << "A program that will print the greatest of three numbers (use multiple if\n""– else) " << endl;
    int x, y, z, l;
    cin >> x >> y >> z;
    if (x > y)
        l = x;
    else
        l = y;
    if (l > z)
        cout << " The greatest number is " << l << endl;
    else
        cout << " The greatest number is " << z << endl;
    return 0;
}

int nestedIfElseGreatestTwoNum() {
    cout << "a program that will find the greatest of three numbers (use nested if -\n""else)" << endl;
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    if (n1 > n2) {
        if (n1 > n3) {
            cout << " The greatest number is " << n1 << endl;
        } else {
            cout << " The greatest number is " << n3 << endl;
        }
    } else {
        if (n2 > n3)
            cout << " The greatest number is " << n2 << endl;
        else
            cout << " The greatest number is " << n3 << endl;
    }
    return 0;
}

// IF ELSE-IF ELSE
int greatestOfThreeNumbers() {
    cout << "A program that will print the greatest of three numbers. " << endl;
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    if (num1 > num2)
        cout << " The greatest number is - " << num1 << endl;
    else if (num2 > num3)
        cout << " The greatest number is - " << num2 << endl;
    else
        cout << " The greatest number is - " << num3 << endl;
    return 0;
}

int main() {
    cout << "Some Easy Questions xD" << endl;
    greatestOfTwoNumbers();
    multipleIfElseGreatestOfThreeNum();
    nestedIfElseGreatestTwoNum();
    greatestOfThreeNumbers();
    return 0;
}