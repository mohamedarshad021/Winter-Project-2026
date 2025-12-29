#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
    int age;
};

int main() {
    Student s[50];
    int count = 0;
    int choice;

    do {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1) {
            cout << "Enter Student ID: ";
            cin >> s[count].id;
            cout << "Enter Student Name: ";
            cin >> s[count].name;
            cout << "Enter Student Age: ";
            cin >> s[count].age;
            count++;
            cout << "Student Added Successfully!\n";
        }
        else if(choice == 2) {
            if(count == 0) {
                cout << "No student records available.\n";
            } else {
                for(int i = 0; i < count; i++) {
                    cout << "\nID: " << s[i].id;
                    cout << "\nName: " << s[i].name;
                    cout << "\nAge: " << s[i].age << endl;
                }
            }
        }
        else if(choice == 3) {
            int searchId;
            cout << "Enter Student ID to search: ";
            cin >> searchId;
            bool found = false;

            for(int i = 0; i < count; i++) {
                if(s[i].id == searchId) {
                    cout << "\nStudent Found!";
                    cout << "\nName: " << s[i].name;
                    cout << "\nAge: " << s[i].age << endl;
                    found = true;
                    break;
                }
            }
            if(!found) {
                cout << "Student Not Found!\n";
            }
        }

    } while(choice != 4);

    return 0;
}
