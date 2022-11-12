// ito ay mga library
#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
using namespace std;
// ito para maka pag-change color
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
// ito ay maximum size in pwede e input
const int MAXSIZE = 100;

// ito ay variable array para makapag stored ng list of student
string firstname[MAXSIZE] = {};
string middlename[MAXSIZE] = {};
string lastname[MAXSIZE] = {};
string course[MAXSIZE] = {};
int examCorrect[MAXSIZE] = {};
int examWrong[MAXSIZE] = {};

// it ay method functionality
void registerForm();
void loginForm();
void viewRecord();
void exit();
void adminSide();
void adminDashboard();
void studentSide();

// it ay main method
int main()
{
    int choice;

    do
    {
        system("CLS");
        cout << "" << setw(55) << "WELCOME TO SIMPLE QUIZ EXAMINATION\n";
        cout << "=================================================================================\n";
        cout << "[1] ADMIN\n";
        cout << "[2] STUDENT\n";
        cout << "[3] EXIT\n";
        cout << "=================================================================================\n";
        cout << "ENTER CHOICE: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            system("CLS");
            adminSide(); // ito ay function ng admin
            break;
        case 2:
            system("CLS");
            studentSide(); // ito ay function ng student
            break;
        case 3:
            system("CLS");
            exit();
            break;
        default:
            cout << "INVALID CHOICE INPUT\n\nPLEASE ENTER ANY KEY TO CONTINUE...";
            _getch();
            cin.clear();           // clear the previous input
            cin.ignore(123, '\n'); // discard the previous input
            break;
        }
    } while (true);

    return 0;
}

// ito ay registration form
void registerForm()
{
    // cin.ignore to pass the input from string
    cin.ignore();
    cout << "" << setw(50) << "REGISTRATION FORM\n";
    cout << "=================================================================================\n";
    char _fname[15], _mname[15], _lname[15], _course[15];
    cout << "ENTER FIRSTNAME: ";
    cin.getline(_fname, 15);
    cout << "ENTER MIDDLENAME: ";
    cin.getline(_mname, 15);
    cout << "ENTER LASTNAME: ";
    cin.getline(_lname, 15);
    cout << "ENTER COURSE: ";
    cin.getline(_course, 15);

    for (int i = 0; i < MAXSIZE; i++)
    {
        if (firstname[i] == "\0")
        {
            firstname[i] = _fname;
            middlename[i] = _mname;
            lastname[i] = _lname;
            course[i] = _course;
            SetConsoleTextAttribute(h, 2);
            cout << "\n"
                 << setw(60) << "ACCOUNT SUCCESSFULLY REGISTERED\n";
            SetConsoleTextAttribute(h, 7);
            cout << "=================================================================================\n";
            cout << "\nPLEASE ENTER ANY KEY TO CONTINUE...";
            break; // to register one accout at a time
        }
    }
}

// ito ay LOGIN FORM at QUIZ function
void loginForm()
{
    cin.ignore();
    int counter = 0;
    char _fname[15], _lname[15];
    char _choice;
    cout << "" << setw(45) << "LOGIN FORM\n";
    cout << "=================================================================================\n";
    cout << "ENTER FIRSTNAME: ";
    cin.getline(_fname, 15);
    cout << "ENTER LASTNAME: ";
    cin.getline(_lname, 15);
    for (int i = 0; i < MAXSIZE; i++)
    {
        if (firstname[i] == _fname && lastname[i] == _lname)
        {
            counter++;
            SetConsoleTextAttribute(h, 2);
            cout << "\n"
                 << setw(65) << "ACCESS GRANTED REDIRECTING TO QUIZ EXAMINATION\n";
            SetConsoleTextAttribute(h, 7);
            cout << "=================================================================================\n";

            cout << "\nPLEASE ENTER ANY KEY TO CONTINUE...";
            _getch();
            system("CLS");
            int score = 0;
            cout << "FULLNAME: " << firstname[i] << " " << lastname[i] << "\n\n";

            cout << "[1] What is the most popular programming langguage?\n\n";
            cout << "[A] PYTHON\n";
            cout << "[B] JAVASCRIPT\n";
            cout << "[C] JAVA\n";
            cout << "[D] C++\n\n";

            cout << "ENTER CHOICE: ";
            cin >> _choice;
            if (_choice == 'a' || _choice == 'A')
            {
                score++;
                examCorrect[i] = score;
            }
            else if (_choice == 'b' || _choice == 'B')
            {
                examWrong[i] = 0;
            }
            else if (_choice == 'c' || _choice == 'C')
            {
                examWrong[i] = 0;
            }
            else if (_choice == 'd' || _choice == 'D')
            {
                examWrong[i] = 0;
            }
            cout << "\n[2] C++ was developed by ___?\n\n";
            cout << "[A] Thomas Kushz\n";
            cout << "[B] John Kemney\n";
            cout << "[C] Bjarne Stroutstrup\n";
            cout << "[D] James Goling\n\n";

            cout << "ENTER CHOICE: ";
            cin >> _choice;
            if (_choice == 'a' || _choice == 'A')
            {
                examWrong[i] = 0;
            }
            else if (_choice == 'b' || _choice == 'B')
            {
                examWrong[i] = 0;
            }
            else if (_choice == 'c' || _choice == 'C')
            {
                score++;
                examCorrect[i] = score;
            }
            else if (_choice == 'd' || _choice == 'D')
            {
                examWrong[i] = 0;
            }
            cout << "\n[3] The modulus operator uses ___ character.?\n\n";
            cout << "[A] +\n";
            cout << "[B] *\n";
            cout << "[C] /\n";
            cout << "[D] %\n\n";

            cout << "ENTER CHOICE: ";
            cin >> _choice;
            if (_choice == 'a' || _choice == 'A')
            {
                examWrong[i] = 0;
            }
            else if (_choice == 'b' || _choice == 'B')
            {
                examWrong[i] = 0;
            }
            else if (_choice == 'c' || _choice == 'C')
            {
                examWrong[i] = 0;
            }
            else if (_choice == 'd' || _choice == 'D')
            {
                score++;
                examCorrect[i] = score;
            }
            cout << "\n[4] Every variable should be separated by ___ separator.?\n\n";
            cout << "[A] Dot\n";
            cout << "[B] Colon\n";
            cout << "[C] Comma\n";
            cout << "[D] Semicolon\n\n";

            cout << "ENTER CHOICE: ";
            cin >> _choice;
            if (_choice == 'a' || _choice == 'A')
            {
                examWrong[i] = 0;
            }
            else if (_choice == 'b' || _choice == 'B')
            {
                examWrong[i] = 0;
            }
            else if (_choice == 'c' || _choice == 'C')
            {
                score++;
                examCorrect[i] = score;
            }
            else if (_choice == 'd' || _choice == 'D')
            {
                examWrong[i] = 0;
            }
            cout << "\n[5] Variable names must begin with ___?\n\n";
            cout << "[A] #\n";
            cout << "[B] $\n";
            cout << "[C] Numbe\n";
            cout << "[D] Letter\n\n";

            cout << "ENTER CHOICE: ";
            cin >> _choice;
            if (_choice == 'a' || _choice == 'A')
            {
                examWrong[i] = 0;
            }
            else if (_choice == 'b' || _choice == 'B')
            {
                examWrong[i] = 0;
            }
            else if (_choice == 'c' || _choice == 'C')
            {
                examWrong[i] = 0;
            }
            else if (_choice == 'd' || _choice == 'D')
            {
                score++;
                examCorrect[i] = score;
            }
            SetConsoleTextAttribute(h, 6);
            cout << "\n"
                 << setw(60) << "ACCOUNT WILL AUTOMATICALLY LOG-OUT\n";
            SetConsoleTextAttribute(h, 7);
            cout << "=================================================================================\n";
            cout << "\nPLEASE ENTER ANY KEY TO CONTINUE...";
            _getch();
            system("CLS");
        }
    }

    // if no regiter account
    if (counter == 0)
    {
        SetConsoleTextAttribute(h, 4);
        cout << "\n"
             << setw(60) << "NO RECORD FIRSTNAME OR LASTNAME WAS FOUND\n";
        SetConsoleTextAttribute(h, 7);
        cout << "=================================================================================\n";
        cout << "\nPLEASE ENTER ANY KEY TO CONTINUE...";
        _getch();
        system("CLS");
    }
}

// ito ay VIEW RECORD function
void viewRecord()
{
    int counter = 0;
    cout << "" << setw(45) << "VIEW RECORD\n";
    cout << "=================================================================================\n";
    cout << "NO." << setw(15) << "FIRStNAME" << setw(15) << "MIDDLENAME" << setw(15) << "LASTNAME" << setw(15) << "COURSE" << setw(15) << "SCORE" << setw(15) << "\n";
    for (int i = 0; i < MAXSIZE; i++)
    {
        if (firstname[i] != "\0")
        {
            counter++;
            cout << counter << setw(15) << firstname[i] << setw(15) << middlename[i] << setw(15) << lastname[i] << setw(15) << course[i] << setw(15) << examCorrect[i] << setw(15);
            cout << "\n=================================================================================\n";
        }
    }

    if (counter == 0)
    {
        SetConsoleTextAttribute(h, 4);
        cout << "\n"
             << setw(45) << "NO RECORD FOUND";
        SetConsoleTextAttribute(h, 7);
        cout << "\n=================================================================================\n";
    }
    cout << "\nPLEASE ENTER ANY KEY TO BACK...";
    _getch();
}

// ito ay exit function
void exit()
{
    cout << "\n=================================================================================\n";
    cout << "|"
         << setw(80) << "|";
    cout << "\n|" << setw(52) << "THANK FOR USING THE APP ";
    SetConsoleTextAttribute(h, 4);
    cout << "\3" << setw(28) << "|\n";
    SetConsoleTextAttribute(h, 7);
    cout << "|"
         << setw(80) << "|";
    cout << "\n=================================================================================\n";
    exit(0);
}

// =================================== ADMIN SIDE ===================================//
void adminSide()
{
    cin.ignore();
    cout << "" << setw(45) << "ADMIN LOGIN FORM\n";
    cout << "=================================================================================\n";
    char username[100], password[100];

    printf("USERNAME: ");
    cin >> username;
    printf("PASSWORD: ");
    cin >> password;

    if (strcmp(username, "admin") == 0 && strcmp(password, "pass") == 0)
    {
        SetConsoleTextAttribute(h, 2);
        cout << "" << setw(43) << "ACCESS GRANTED";
        SetConsoleTextAttribute(h, 7);
        cout << "\n=================================================================================\n";
        cout << "\nPLEASE ENTER ANY KEY TO CONTINUE...";
        _getch();
        system("CLS");
        adminDashboard();
    }
    else if (strcmp(username, "admin") == 1 || strcmp(password, "pass") == 0)
    {
        SetConsoleTextAttribute(h, 4);
        cout << "" << setw(45) << "INVALID USERNAME";
        SetConsoleTextAttribute(h, 7);
        cout << "\n=================================================================================\n";
        cout << "\nPLEASE ENTER ANY KEY TO CONTINUE...";
        _getch();
        system("CLS");
    }
    else if (strcmp(username, "admin") == 0 || strcmp(password, "pass") == 1)
    {
        SetConsoleTextAttribute(h, 4);
        cout << "" << setw(45) << "INVALID PASSWORD";
        SetConsoleTextAttribute(h, 7);
        cout << "\n=================================================================================\n";
        cout << "\nPLEASE ENTER ANY KEY TO CONTINUE...";
        _getch();
        system("CLS");
    }
    else
    {
        SetConsoleTextAttribute(h, 4);
        cout << "" << setw(60) << "ACCESS DINIED INVALID USERNAME AND PASSWORD";
        SetConsoleTextAttribute(h, 7);
        cout << "\n=================================================================================\n";
        cout << "\nPLEASE ENTER ANY KEY TO CONTINUE...";
        _getch();
        system("CLS");
    }
}

// ito ay para sa ADMIN DASHBOARD
void adminDashboard()
{
    int choice;

    do
    {
        system("CLS");
        cout << "" << setw(45) << "ADMIN DASHBOARD FORM\n";
        cout << "=================================================================================\n";
        cout << "[1] VIEW STUDENT RECORDS\n";
        cout << "[2] LOGOUT\n";
        cout << "ENTER CHOICE: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            system("CLS");
            viewRecord();
            break;
        case 2:
            SetConsoleTextAttribute(h, 2);
            cout << "" << setw(45) << "LOG-OUT SUCCESSFUL\n";
            SetConsoleTextAttribute(h, 7);
            cout << "=================================================================================\n";
            cout << "\nPLEASE ENTER ANY KEY TO CONTINUE...";
            _getch();
            system("CLS");
            main();
            break;
        default:
            SetConsoleTextAttribute(h, 4);
            cout << "" << setw(45) << "INVALID CHOICE INPUT\n";
            SetConsoleTextAttribute(h, 7);
            cout << "=================================================================================\n";
            cout << "\nPLEASE ENTER ANY KEY TO CONTINUE...";
            _getch();
            cin.clear();           // clear the previous input
            cin.ignore(123, '\n'); // discard the previous input
            system("CLS");
            adminDashboard();
            break;
        }
    } while (true);
}

// =================================== STUDENT SIDE ===================================//
void studentSide()
{
    int choice;

    do
    {
        system("CLS");
        cout << "" << setw(50) << "STUDENT DASHBOARD\n";
        cout << "=================================================================================\n";
        cout << "[1] REGISTER\n";
        cout << "[2] LOGIN\n";
        cout << "[3] BACK\n";
        cout << "ENTER CHOICE: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            system("CLS");
            registerForm();
            _getch();
            break;
        case 2:
            system("CLS");
            loginForm();
            break;
        case 3:
            cout << "=================================================================================\n";
            cout << "\nPLEASE ENTER ANY KEY TO BACK...";
            _getch();
            system("CLS");
            main();
            break;

        default:
            SetConsoleTextAttribute(h, 4);
            cout << "" << setw(50) << "INVALID CHOICE INPUT\n";
            SetConsoleTextAttribute(h, 7);
            cout << "=================================================================================\n";
            cout << "\nPLEASE ENTER ANY KEY TO CONTINUE...";
            _getch();
            cin.clear();           // clear the previous input
            cin.ignore(123, '\n'); // discard the previous input
            system("CLS");
            break;
        }
    } while (true);
}