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

// NESTED IF ELSE
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

// PROGRAM USING NESTED IF CONDITIONS TO ASSIGN GRADES ACCORDING TO USER INPUT
/* @marks >= 90         "A"
 * @marks >= 80 && < 90 "B"
 * @marks >= 70 && <80  "C"
 * @marks >= 60 && < 70 "D"
 * @marks <  60        "Fail"
 */
int programToAssignGrade() {
    int marks;
    cout
            << "A program using nested if condition that will enter total marks and assign grades according to the following"
            << endl;
    cin >> marks;
//    Own Code
    if (marks >= 90)
        cout << "Grade A" << endl;
    else if (marks >= 80 && marks < 90)
        cout << "Grade B" << endl;
    else if (marks >= 70 && marks < 80)
        cout << "Grade C" << endl;
    else if (marks >= 60 && marks < 70)
        cout << "Grade D" << endl;
    else if (marks < 60)
        cout << "Fail" << endl;

//    Text Book Code
/*    if (marks >= 90) {
        cout << "A Grade";
    } else if (marks >= 80) {
        cout << "B Grade";
    } else if (marks >= 70) {
        cout << "C Grade";
    } else if (marks >= 60) {
        cout << "D Grade";
    } else {
        cout << "Fail";
    }
*/
    return 0;
}

// SWITCH STATEMENTS BASIC Q-1
int switchStatementBasicProgram() {
    cout << "A program to show the use of switch statement" << endl;
    char x;
    cin >> x;
    switch (x) {
        case 'a':
        case 'A':
            cout << "Vowel a" << endl;
            break;
        case 'e':
        case 'E':
            cout << "Vowel e " << endl;
            break;
        case 'o' :
        case 'O' :
            cout << "Vowel o" << endl;
            break;
        case 'i' :
        case 'I' :
            cout << "Vowel i";
            break;
        case 'u' :
        case 'U' :
            cout << "Vowel u";
            break;
        default:
            cout << "Not a Vowel " << x << endl;
    }
    return 0;
}

//SWITCH STATEMENTS Q-2
/* @Grade A - 15k Salary
 * @Grade B - 12k Salary
 * @Grade C - 10k Salary
 * @Grade D - 09k Salary
 * @Default - Invalid Grade*/
int displaySalaryUsingSwitchCase() {
    cout
            << "A program that will accept a one character grade code and depending on the grade code display the basic salary according to the table given below"
            << endl;
    char grade;
    cin >> grade;
    switch (grade) {
        case 'A':
            cout << " 15k Salary " << endl;
            break;
        case 'B':
            cout << " 12k Salary " << endl;
            break;
        case 'C':
            cout << " 10k Salary " << endl;
            break;
        case 'D':
            cout << " 9k Salary " << endl;
            break;
        default:
            cout << " Invalid Grade Input " << endl;
    }
    return 0;
}

// LOOPS
// while loop # 1
// A program to find the sum of the first N natural number
int whileLoopQuestion() {
    int n;
    int total = 0;
    n = 1;
    while (n <= 10) {
        total += n;
        n++;
    }
    cout << "Sum of the numbers  " << total << endl;
    return 0;
}

// do while loop #2
// A program to find the sum of the first N natural number
int doWhileLoopQuestion() {
    int N, number, sum;
    cin >> N;
    sum = 0;
    number = 1;
    do {
        sum += number;
        number += 1;
    } while (number <= N);
    {
        cout << sum;
    }
    return 0;
}

// FOR LOOP #3
// A program to print N Numbers
int forLoopQuestion() {
    int x;
    cin >> x;
    for (int i = 0; i <= x; i++) {
        cout << i << endl;
    }
    return 0;
}

//What will be the output of the following program
int inTextQuestionOne() {
    int i = 0, a = 0, b = 0, c = 0, f = 0;
    while (i <= 5) {
        switch (i++) {
            case 1:
            case 2:
                cout << a << " A b4 " << endl;
                ++a;
                cout << a << " A af" << endl;
                break;
            case 3:
            case 4:
                cout << b << " B b4" << endl;
                ++b;
                cout << b << " B af" << endl;
                break;
            case 5:
                ++c;
                break;
            default:
                ++f;
                break;
        }
    }
    cout << a << " A " << endl;
    cout << b << " B " << endl;
    cout << c << " C " << endl;
    cout << f << " F " << endl;
    return 0;
}

// What will be the value of counter after the following program is executed
int inTextQuestionTwo() {
    int counter;
    int digit = 0;
    counter = 1;
    while (digit <= 10) {
        cout << "Counter Value Before Iterating is " << counter << endl;
        ++counter;
        cout << "Counter Value After Iterating is " << counter << endl;
        cout << "Digit Value Before Iterating is " << digit << endl;
        ++digit;
        cout << "Digit Value After Iterating is " << digit << endl;
    }
    cout << "Counter Value is " << counter << endl;
    return 0;
}

//What will be the value of sum after the following program is executed ?
int inTextQuestionThree() {
    int sum, i;
    sum = 1;
    i = 9;
    do {
        i -= 1;
        sum *= 2;
    } while (i > 9);
    {
        cout << sum << endl;
    }
    return 0;
}

// What will the following program do ?
int inTextQuestionFour() {
    int digit = 0;
    do {
        cout << "Digits " << digit++ << endl;
    } while (digit <= 10);
    {}
    return 0;
}

// go to statement
int goToStatementExample() {
    int num = 1;
    STEP:
    do {
        if (num == 6) {
            num++;
            goto STEP;
        }
        cout << "Value of Num " << num << endl;
        num += 1;
    } while (num < 10);
    return 0;
}

int main() {
    cout << "Some Easy Questions xD" << endl;
//    greatestOfTwoNumbers();
//    multipleIfElseGreatestOfThreeNum();
//    nestedIfElseGreatestTwoNum();
//    greatestOfThreeNumbers();
//    programToAssignGrade();
//    switchStatementBasicProgram();
//    displaySalaryUsingSwitchCase();
//    whileLoopQuestion();
//    doWhileLoopQuestion();
//    forLoopQuestion();
//    inTextQuestionOne();
//    inTextQuestionTwo();
//    inTextQuestionThree();
//    inTextQuestionFour();
//    goToStatementExample();
    return 0;
}