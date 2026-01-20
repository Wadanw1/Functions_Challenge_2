#include <iostream>

using namespace std;

// The beginning so started with the most important
void inputGrades(double &g1, double &g2, double &g3);
double calculateAverage(const double g1, const double g2, const double g3);
char getLetterGrade(const double avg);

int main() {
    // writing the grades to 0
    double grade1 = 0, grade2 = 0, grade3 = 0;
    int choice;

    do {
        cout << "\n1. Type in Grades\n2. Show Avg\n3. Show Letter\n4. Quit" << endl;
        cout << "What do you want to do? ";
        cin >> choice;
// basic if else statements
        if (choice == 1) {
            inputGrades(grade1, grade2, grade3);
        }
        else if (choice == 2) {
            double average = calculateAverage(grade1, grade2, grade3);
            cout << "Average: " << average << endl;
        }
        else if (choice == 3) {
            double average = calculateAverage(grade1, grade2, grade3);
            cout << "Grade: " << getLetterGrade(average) << endl;
        }
    } while (choice != 4);

    return 0;
}

// I am going to get the grades with function...
void inputGrades(double &g1, double &g2, double &g3) {
    cout << "Grade 1: "; cin >> g1;
    cout << "Grade 2: "; cin >> g2;
    cout << "Grade 3: "; cin >> g3;
}

// average
double calculateAverage(const double g1, const double g2, const double g3) {
    return (g1 + g2 + g3) / 3.0;
}

// how its grading looks like
char getLetterGrade(const double avg) {
    if (avg >= 90) return 'A';
    if (avg >= 80) return 'B';
    if (avg >= 70) return 'C';
    if (avg >= 60) return 'D';
    return 'F';
}