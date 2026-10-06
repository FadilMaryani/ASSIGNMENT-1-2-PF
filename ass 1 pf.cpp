#include <iostream>
#include <string>
using namespace std;

int main()
{
    string patientName;
    string patientCategory;
    string arrivalTime;

    int age;
    int priorityLevel;
    int waitingTime;
    string queueNumber;

    cout << "========================================" << endl;
    cout << "      HOSPITAL PATIENT REGISTRATION PONMALAR" << endl;
    cout << "========================================" << endl;
    

    cout << "Enter patient name: ";
    getline(cin, patientName);

    cout << "Enter age: ";
    cin >> age;

    cin.ignore();

    cout << "Enter patient category (Emergency/Senior Citizen/Normal): ";
    getline(cin, patientCategory);

    cout << "Enter arrival time: ";
    getline(cin, arrivalTime);

    // Assign priority and queue number
    if (patientCategory == "Emergency" || patientCategory == "emergency")
    {
        priorityLevel = 1;
        queueNumber = "E001";
        waitingTime = 0;
        patientCategory = "Emergency";
    }
    else if (patientCategory == "Senior Citizen" || patientCategory == "senior citizen")
    {
        priorityLevel = 2;
        queueNumber = "S001";
        waitingTime = 10;
        patientCategory = "Senior Citizen";
    }
    else if (patientCategory == "Normal" || patientCategory == "normal")
    {
        priorityLevel = 3;
        queueNumber = "N001";
        waitingTime = 20;
        patientCategory = "Normal";
    }
    else
    {
        cout << "\nInvalid patient category!" << endl;
        cout << "Please enter Emergency, Senior Citizen or Normal." << endl;

        return 0;
    }

    // Display patient information
    cout << "\n========================================" << endl;
    cout << "        REGISTRATION SUCCESSFUL         " << endl;
    cout << "========================================" << endl;

    cout << "Patient Name   : " << patientName << endl;
    cout << "Age            : " << age << endl;
    cout << "Category       : " << patientCategory << endl;
    cout << "Queue Number   : " << queueNumber << endl;
    cout << "Priority Level : " << priorityLevel << endl;
    cout << "Arrival Time   : " << arrivalTime << endl;
    cout << "Estimated Wait : " << waitingTime << " minutes" << endl;

    // Special message
    cout << "\n----------------------------------------" << endl;

    if (priorityLevel == 1)
    {
        cout << "!!! EMERGENCY PATIENT !!!" << endl;
        cout << "Please proceed to the emergency department." << endl;
        cout << "Your case will be attended immediately." << endl;
    }
    else if (priorityLevel == 2)
    {
        cout << "PRIORITY PATIENT" << endl;
        cout << "Please wait for your queue number." << endl;
        cout << "You will be served before normal patients." << endl;
    }
    else
    {
        cout << "STANDARD PATIENT" << endl;
        cout << "Please wait until your queue number is called." << endl;
    }

    cout << "----------------------------------------" << endl;
    cout << "       Thank you for your patience.     " << endl;
    cout << "========================================" << endl;

    return 0;
}
