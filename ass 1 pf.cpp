#include <iostream>
#include <string>
using namespace std;

// Function Prototype
int assignPriority(string category);

void displayRegistrationInformation (string patientName , string patientCategory , string arrivalTime , int age ,
    int priorityLevel , int waitingTime , string queueNumber ) ;

int main()
{
    string patientName;
    string patientCategory;
    string arrivalTime;
    char continueRegister;

    int age;
    int priorityLevel;
    int waitingTime;
    string queueNumber;

    int emergencyCount = 1;
    int seniorCount = 1;
    int normalCount = 1;

    do
    {
        cout << "\n========================================" << endl;
        cout << "      HOSPITAL PATIENT REGISTRATION     " << endl;
        cout << "========================================" << endl;

        cout << "Enter patient name: ";
        cin.ignore();
        getline(cin, patientName);

        cout << "Enter age: ";
        cin >> age;

        cin.ignore();

        cout << "Enter patient category (Emergency/Senior Citizen/Normal): ";
        getline(cin, patientCategory);

        cout << "Enter arrival time: ";
        getline(cin, arrivalTime);

        // Function Call
        priorityLevel = assignPriority(patientCategory);

        // Check invalid category
        if (priorityLevel == 0)
        {
            cout << "\nInvalid patient category!" << endl;
            cout << "Please enter Emergency, Senior Citizen or Normal." << endl;

            cout << "\nRegister another patient? (Y/N): ";
            cin >> continueRegister;

            continue;
        }

        // Assign queue number and waiting time
        if (priorityLevel == 1)
        {
            queueNumber = "E00" + to_string(emergencyCount);
            emergencyCount++;

            waitingTime = 0;
            patientCategory = "Emergency";
        }
        else if (priorityLevel == 2)
        {
            queueNumber = "S00" + to_string(seniorCount);
            seniorCount++;

            waitingTime = 10;
            patientCategory = "Senior Citizen";
        }
        else
        {
            queueNumber = "N00" + to_string(normalCount);
            normalCount++;

            waitingTime = 20;
            patientCategory = "Normal";
        }

        // Display registration information
         displayRegistrationInformation ( patientName , patientCategory , arrivalTime , age , priorityLevel ,
	     waitingTime , queueNumber ) ; 

		
        // Special message
        if (priorityLevel == 1)
        {
            cout << "!!! EMERGENCY PATIENT !!!" << endl;
            cout << "Please proceed to the emergency department." << endl;
            cout << "Your case will be attended immediately." << endl;
        }
        else if (priorityLevel == 2)
        {
            cout << "PRIORITY PATIENT" << endl;
            cout << "You will be served before normal patients." << endl;
        }
        else
        {
            cout << "STANDARD PATIENT" << endl;
            cout << "Please wait until your queue number is called." << endl;
        }

        cout << "----------------------------------------" << endl;

        // Ask for another patient
        cout << "\nRegister another patient? (Y/N): ";
        cin >> continueRegister;

    } while (continueRegister == 'Y' || continueRegister == 'y');

    cout << "\n========================================" << endl;
    cout << "       REGISTRATION SYSTEM CLOSED       " << endl;
    cout << "========================================" << endl;

    return 0;
}

// Display registration information
        void displayRegistrationInformation ( string patientName , string patientCategory , string
		arrivalTime , int age ,int priorityLevel , int waitingTime , string queueNumber ) {
		
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
        
        cout << "\n----------------------------------------" << endl;
    }
// Function Definition
int assignPriority(string category)
{
    if (category == "Emergency" || category == "emergency")
    {
        return 1;
    }
    else if (category == "Senior Citizen" ||
             category == "senior citizen")
    {
        return 2;
    }
    else if (category == "Normal" || category == "normal")
    {
        return 3;
    }
    else
    {
        return 0;
    }
}
