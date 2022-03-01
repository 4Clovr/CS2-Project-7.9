#include <iostream>
#include <string>
#include <memory>

using namespace std;

struct Student
{
    string first_name;
    string last_name;
    string course_grade;
    int quiz[10];
};

void displayStudents(struct Student student[], int student_size, string grade) {

    for (int i = 0; i < student_size; i++)
    {
        if (student[i].course_grade == grade) // if the following students has the grade mathcing to the letter grade 
        {
            cout << student[i].first_name << " " << student[i].last_name;
            for (int k = 0; k < 10; k++)
            {
                cout << " " << student[i].quiz[k];
            }
        }
    }
}
  
int main()
{
    struct Student students[10];
    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter Student " << i + 1 << " First name, last name: ";
        
        cin >> students[i].first_name >> students[i].last_name;

        cout << "Enter Student " << i + 1 << " Quiz Grades: ";

        for (int j = 0; j < 10; j++)
        {
            int x;
            cin >> x;
            students[i].quiz[j] = x;
            sum += x;
        }
       

        if (sum/10 <= 100 && sum/1000  >= 90)
        {
            students[i].course_grade = "A";
        }
        else if (sum / 10 < 90 && sum >= 80)
        {
            students[i].course_grade = "B";
        }
        else if (sum / 10 < 80 && sum >= 70)
        {
            students[i].course_grade = "C";
        }
        else if (sum / 10 < 70 && sum >= 60)
        {
            students[i].course_grade = "D";
        }
        else if (sum / 10 < 60)
        {
            students[i].course_grade = "F";
        }
    }

    int nStudents = 10;

    cout << "\nStudents in Grade A:\n";
    displayStudents(students, nStudents, "A");

    cout << "\nStudents in Grade B:\n";
    displayStudents(students, nStudents, "B");

    cout << "\nStudents in Grade C:\n";
    displayStudents(students, nStudents, "C");

    cout << "\nStudents in Grade D:\n";
    displayStudents(students, nStudents, "D");

    cout << "\nStudents in Grade F:\n";
    displayStudents(students, nStudents, "F");

    return 0;


}


