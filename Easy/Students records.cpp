#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// Define the structure for student records
struct student {
    int sid;
    string name;
    string address;
    int sub1, sub2, sub3;
    int total;
};

// Compare functions for sorting
bool compare_sid(student a, student b) { return a.sid < b.sid; }
bool compare_name(student a, student b) { return a.name < b.name; }
bool compare_address(student a, student b) { return a.address < b.address; }
bool compare_sub1(student a, student b) { return a.sub1 < b.sub1; }
bool compare_sub2(student a, student b) { return a.sub2 < b.sub2; }
bool compare_sub3(student a, student b) { return a.sub3 < b.sub3; }
bool compare_total(student a, student b) { return a.total < b.total; }

int main() {
    const int MAX_STUDENTS = 5;
    student records[MAX_STUDENTS];
    int choice;

    // Input student records
    for (int i = 0; i < MAX_STUDENTS; i++) {
        cout << "Enter student ID: ";
        cin >> records[i].sid;
        cout << "Enter student name: ";
        cin >> records[i].name;
        cout << "Enter student address: ";
        cin >> records[i].address;
        cout << "Enter marks for subject 1: ";
        cin >> records[i].sub1;
        cout << "Enter marks for subject 2: ";
        cin >> records[i].sub2;
        cout << "Enter marks for subject 3: ";
        cin >> records[i].sub3;
        records[i].total = records[i].sub1 + records[i].sub2 + records[i].sub3;
    }

    // Menu for sorting options
    while (true) {
        cout << "Choose sorting option:" << endl;
        cout << "1. Sort by ID (Ascending)" << endl;
        cout << "2. Sort by Name (Ascending)" << endl;
        cout << "3. Sort by Address (Ascending)" << endl;
        cout << "4. Sort by Subject 1 Marks (Ascending)" << endl;
        cout << "5. Sort by Subject 2 Marks (Ascending)" << endl;
        cout << "6. Sort by Subject 3 Marks (Ascending)" << endl;
        cout << "7. Sort by Total Marks (Ascending)" << endl;
        cout << "8. Sort by ID (Descending)" << endl;
        cout << "9. Sort by Name (Descending)" << endl;
        cout << "10. Sort by Address (Descending)" << endl;
        cout << "11. Sort by Subject 1 Marks (Descending)" << endl;
        cout << "12. Sort by Subject 2 Marks (Descending)" << endl;
        cout << "13. Sort by Subject 3 Marks (Descending)" << endl;
        cout << "14. Sort by Total Marks (Descending)" << endl;
        cout << "15. Exit" << endl;

        cin >> choice;

        switch (choice) {
            case 1:
                sort(records, records + MAX_STUDENTS, compare_sid);
                break;
            case 2:
                sort(records, records + MAX_STUDENTS, compare_name);
                break;
            case 3:
                sort(records, records + MAX_STUDENTS, compare_address);
                break;
            case 4:
            sort(records, records + MAX_STUDENTS, compare_sub1);
            break;
        case 5:
            sort(records, records + MAX_STUDENTS, compare_sub2);
            break;
        case 6:
            sort(records, records + MAX_STUDENTS, compare_sub3);
            break;
        case 7:
            sort(records, records + MAX_STUDENTS, compare_total);
            break;
        case 8:
            sort(records, records + MAX_STUDENTS, compare_sid);
            reverse(records, records + MAX_STUDENTS);
            break;
        case 9:
            sort(records, records + MAX_STUDENTS, compare_name);
            reverse(records, records + MAX_STUDENTS);
            break;
        case 10:
            sort(records, records + MAX_STUDENTS, compare_address);
            reverse(records, records + MAX_STUDENTS);
            break;
        case 11:
            sort(records, records + MAX_STUDENTS, compare_sub1);
            reverse(records, records + MAX_STUDENTS);
            break;
        case 12:
            sort(records, records + MAX_STUDENTS, compare_sub2);
            reverse(records, records + MAX_STUDENTS);
            break;
        case 13:
            sort(records, records + MAX_STUDENTS, compare_sub3);
            reverse(records, records + MAX_STUDENTS);
            break;
        case 14:
            sort(records, records + MAX_STUDENTS, compare_total);
            reverse(records, records + MAX_STUDENTS);
            break;
        case 15:
            exit(0);
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    // Display the sorted records
    cout << "Student Records:" << endl;
    cout << "ID\tName\tAddress\tSub1\tSub2\tSub3\tTotal" << endl;
    for (int i = 0; i < MAX_STUDENTS; i++) {
        cout << records[i].sid << "\t" << records[i].name << "\t" << records[i].address << "\t" << records[i].sub1 << "\t" << records[i].sub2 << "\t" << records[i].sub3 << "\t" << records[i].total << endl;
    }
}

return 0;
}

