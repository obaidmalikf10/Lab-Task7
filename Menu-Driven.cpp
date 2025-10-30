#include <iostream>
using namespace std;

int main() {
    int choice;
    float num1, num2, result;

    do {
        cout << "\n--- Simple Calculator Menu ---\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Exit\n";
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 + num2;
                cout << "Result = " << result << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 - num2;
                cout << "Result = " << result << endl;
                break;

            case 3:
                cout << "Exiting the program... Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice! Please enter 1, 2, or 3.\n";
        }

    } while (choice != 3);

    return 0;
}
