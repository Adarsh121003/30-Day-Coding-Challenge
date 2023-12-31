// Objective
// Today, we're delving into Inheritance. Check out the attached tutorial for learning materials and an instructional video.

// Task
// You are given two classes, Person and Student, where Person is the base class and Student is the derived class. Completed code for Person and a declaration for Student are provided for you in the editor. Observe that Student inherits all the properties of Person.

// Complete the Student class by writing the following:

// A Student class constructor, which has  parameters:
// A string, .
// A string, .
// An integer, .
// An integer array (or vector) of test scores, .
// A char calculate() method that calculates a Student object's average and returns the grade character representative of their calculated average:
// Grading.png

// Input Format

// The locked stub code in the editor reads the input and calls the Student class constructor with the necessary arguments. It also calls the calculate method which takes no arguments.

// The first line contains , , and , separated by a space. The second line contains the number of test scores. The third line of space-separated integers describes .

// Constraints

// Output Format

// Output is handled by the locked stub code. Your output will be correct if your Student class constructor and calculate() method are properly implemented.

// Sample Input

// Heraldo Memelli 8135627
// 2
// 100 80
// Sample Output

//  Name: Memelli, Heraldo
//  ID: 8135627
//  Grade: O
// Explanation

// This student had  scores to average:  and . The student's average grade is . An average grade of  corresponds to the letter grade , so the calculate() method should return the character'O'.
// =========================Solution=================================
#include <iostream>
#include <vector>

using namespace std;

class Person {
protected:
    string firstName;
    string lastName;
    int id;

public:
    Person(string firstName, string lastName, int identification) {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }

    void printPerson() {
        cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
    }
};

class Student : public Person {
private:
    vector<int> testScores;

public:
    Student(string firstName, string lastName, int identification, vector<int> scores)
        : Person(firstName, lastName, identification), testScores(scores) {}

    char calculate() {
        int totalScore = 0;
        for (int score : testScores) {
            totalScore += score;
        }
        int averageScore = totalScore / testScores.size();

        if (averageScore >= 90 && averageScore <= 100) {
            return 'O';
        } else if (averageScore >= 80 && averageScore < 90) {
            return 'E';
        } else if (averageScore >= 70 && averageScore < 80) {
            return 'A';
        } else if (averageScore >= 55 && averageScore < 70) {
            return 'P';
        } else if (averageScore >= 40 && averageScore < 55) {
            return 'D';
        } else {
            return 'T';
        }
    }
};

int main() {
    string firstName;
    string lastName;
    int id;
    int numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores;
    for (int i = 0; i < numScores; i++) {
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student* s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}
