#include <iostream>
#include <string>
using namespace std;

//function mintak maklumat pesakit
void patientInformation(string &patientName, string &arrivalTime, string &patientCategory, int &age, string &patientCategoryL);
//function petingkan siapa

//function untuk display maklumat pesakit

//function untuk panggilan sape yang penting


int main() {
    string patientName;
    string arrivalTime;
    int age;
    string patientCategory;
    string patientCategoryL;

    int priorityLevel;
    int waitingTime;

    int emergencyCount = 1;
    int seniorCount = 1;
    int normalCount = 1;

    string queueNumber;
    char choice;

    //looping
    do {
        //function mintak maklumat pesakit
        patientInformation(patientName, arrivalTime, patientCategory, age, patientCategoryL);
        //function petingkan siapa
       
        //function untuk display maklumat pesakit
        
        //function untuk panggilan sape yang penting
       

        cout << "\nRegister another patient?(Y/N): ";
        cin >> choice;
        cin.ignore();

    } while (choice == 'y' || choice == 'Y');

    cout << "\n========================================" << endl;
    cout << "        REGISTRATION SYSTEM CLOSED       " << endl;
    cout << "========================================" << endl;

    return 0;
}

void patientInformation(string &patientName, string &arrivalTime, string &patientCategory, int &age, string &patientCategoryL) {
    cout << "\n========================================" << endl;
    cout << "      HOSPITAL PATIENT REGISTRATION     " << endl;
    cout << "========================================" << endl;

    cout << "Enter patient name: ";
    getline(cin, patientName);

    cout << "Enter patient age: ";
    cin >> age;
    cin.ignore();

    cout << "**PATIENT CATEGORY**" << endl;
    cout << " - Emergency (E)" << endl;
    cout << " - Senior Citizen (age 60+) (S)" << endl;
    cout << " - Normal (N)" << endl;
    cout << "\nEnter patient category below: ";
    cin >> patientCategoryL;
    cin.ignore(); // Bersihkan buffer selepas cin >> patientCategoryL
}
//function petingkan siapa kat bawah ni

//function untuk display maklumat pesakit

//function untuk panggilan sape yang penting

