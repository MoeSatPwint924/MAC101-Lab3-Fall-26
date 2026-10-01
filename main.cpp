#include <iostream>

using namespace std;

int main() {
    int credits;
    double gpa;
    int holds;
    int courseReq;

    cout << "Enter total credits earned: ";
    cin >> credits;

    cout << "Enter GPA: ";
    cin >> gpa;

    cout << "Enter number of holds on account: ";
    cin >> holds;

    cout << "Enter number of remaining course requirements: ";
    cin >> courseReq;

    if (credits >= 60 && gpa >= 2.0 && holds == 0 && courseReq == 0) {
        cout << "\nCongratulations! You are eligible to graduate!" << endl;
    } else {
        cout << "\nYou are not eligible to graduate. Please review the following requirement(s):" << endl;
        if (credits < 60) {
            cout << "- You need at least 60 credits to graduate. Current credits: " << credits << endl;
        }
        if (gpa < 2.0) {
            cout << "- You need a GPA of at least 2.0. Current GPA: " << gpa << endl;
        }
        if (holds != 0) {
            cout << "- You have active holds on your account. Total holds: " << holds << endl;
        }
        if (courseReq != 0) {
            cout << "- You have incomplete course requirements. Remaining courses: " << courseReq << endl;
        }
    }

    return 0;
}
