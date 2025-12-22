#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Employee {
    string name;
    int age;
    vector<string> skills;
};

int main() {
    int totalEmployees;
    cout << "Enter number of employees: ";
    cin >> totalEmployees;

    vector<Employee> employees;

    for (int i = 0; i < totalEmployees; i++) {
        Employee emp;
        cin.ignore(); 

        cout << "\nEnter details for employee " << i + 1 << ":\n";

        cout << "Name: ";
        getline(cin, emp.name);

        cout << "Age: ";
        cin >> emp.age;

        int totalSkills;
        cout << "Number of skills: ";
        cin >> totalSkills;
        cin.ignore(); 

        emp.skills.resize(totalSkills);

        for (int j = 0; j < totalSkills; j++) {
            cout << "Enter skill " << j + 1 << ": ";
            getline(cin, emp.skills[j]);
        }

        employees.push_back(emp);
    }

    cout << "\n--- Employee Details ---\n";

    for (int i = 0; i < employees.size(); i++) {
        cout << "\nEmployee " << i + 1 << ":\n";
        cout << "Name: " << employees[i].name << endl;
        cout << "Age: " << employees[i].age << endl;

        cout << "Skills: ";
        for (int j = 0; j < employees[i].skills.size(); j++) {
            cout << employees[i].skills[j] << " ";
        }
        cout << endl;
    }

    return 0;
}
