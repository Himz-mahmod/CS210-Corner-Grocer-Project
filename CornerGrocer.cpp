
/*
 * Corner Grocer Item Tracking Program
 * CS 210 – Project Three
 */

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <iomanip>

using namespace std;

class GroceryTracker {
private:
    map<string, int> itemFrequency;

    void loadData() {
        ifstream inputFile("CS210_Project_Three_Input_File.txt");
        string itemName;

        if (!inputFile.is_open()) {
            cout << "Error: Could not open input file.\n";
            return;
        }

        while (inputFile >> itemName) {
            itemFrequency[itemName]++;
        }

        inputFile.close();
    }

    void createBackupFile() {
        ofstream outputFile("frequency.dat");
        for (const auto& pair : itemFrequency) {
            outputFile << pair.first << " " << pair.second << endl;
        }
        outputFile.close();
    }

public:
    GroceryTracker() {
        loadData();
        createBackupFile();
    }

    int getItemFrequency(string item) {
        if (itemFrequency.count(item)) {
            return itemFrequency[item];
        }
        return 0;
    }

    void printAllFrequencies() {
        cout << "\nItem Purchase Frequencies:\n";
        cout << "---------------------------\n";
        for (const auto& pair : itemFrequency) {
            cout << setw(15) << left << pair.first << pair.second << endl;
        }
    }

    void printHistogram() {
        cout << "\nItem Purchase Histogram:\n";
        cout << "---------------------------\n";
        for (const auto& pair : itemFrequency) {
            cout << setw(15) << left << pair.first;
            for (int i = 0; i < pair.second; i++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

void displayMenu() {
    cout << "\n====== Corner Grocer Menu ======\n";
    cout << "1. Search for specific item frequency\n";
    cout << "2. Display all item frequencies\n";
    cout << "3. Display histogram\n";
    cout << "4. Exit program\n";
    cout << "=================================\n";
    cout << "Enter your choice: ";
}

int main() {
    GroceryTracker tracker;
    int choice = 0;

    do {
        displayMenu();
        cin >> choice;

        while (cin.fail() || choice < 1 || choice > 4) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input. Please enter 1-4: ";
            cin >> choice;
        }

        if (choice == 1) {
            string itemSearch;
            cout << "Enter item name: ";
            cin >> itemSearch;

            int frequency = tracker.getItemFrequency(itemSearch);
            cout << itemSearch << " was purchased "
                 << frequency << " time(s).\n";
        }
        else if (choice == 2) {
            tracker.printAllFrequencies();
        }
        else if (choice == 3) {
            tracker.printHistogram();
        }
        else if (choice == 4) {
            cout << "Exiting program. Goodbye!\n";
        }

    } while (choice != 4);

    return 0;
}
