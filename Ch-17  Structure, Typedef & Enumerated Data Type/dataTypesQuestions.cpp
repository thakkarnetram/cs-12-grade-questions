#include <iostream>
using namespace std;

typedef int nigga;

struct Student {
    char name[20];
    bool isPass;
};

struct today {
    nigga month;
    nigga day ;
    nigga year;
};

struct bioData{
    char name[30];
    today date_of_birth;
    char address[39];
};



enum days {
    sun,mon,tue,wed
};

int main() {
//    cout << "STRUCTURE, TYPEDEF &\n"
//            "ENUMERATED DATA TYPE " << endl;
//
//    cout << "Structure Example " << endl;
//    Student student1, student2;
//    cin >> student1.name >> student1.isPass;
//    cin >> student2.name >> student2.isPass;
//     // init
//    Student student3 = {"Student 3 Hu ", false};
//    cout << student3.name << "pass ? " << student3.isPass << endl;
//    cout << student2.name << "pass ? " << student2.isPass << endl;
//    cout << student1.name << "pass ? " << student1.isPass << endl;

    // Structure within structure
//    bioData bioData;
//    cout << "Enter Name " ;
//    gets(bioData.name);
//    cout << "Enter Date of Birth Month  " ;
//    cin >> bioData.date_of_birth.month ;
//    cout << "Enter Date of Birth Day  " ;
//    cin >> bioData.date_of_birth.day ;
//    cout << "Enter Date of Birth Year  " ;
//    cin >> bioData.date_of_birth.year ;
//    cout << "Enter Address " << endl;
//    gets(bioData.address);
//    bioData bioData2;
//    bioData2 = {"helLo", {4,3} , "Delhi"};

    // Accessing nested structure members
    //As the structure is nested inside another, you must apply the dot operator twice
    //to access the structure members:

    // Enum and stuff
    days today;
    for(today = sun ; today <= wed ; today = static_cast<days>(today + 1)){
        cout<< "Today \n" << today;
    }
    return 0;
}
