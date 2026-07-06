#include <iostream>
#include <string>
#include <vector>
#include <limits>

struct Student
{
    std::string id;
    std::string name;
    int age;
    std::string course;
    std::string grade;
};

void displayMenu()
{
    std::cout << std::endl;
    std::cout << "====================================" << std::endl;
    std::cout << "   Student Record Management System" << std::endl;
    std::cout << "====================================" << std::endl;
    std::cout << "1. Add Student" << std::endl;
    std::cout << "2. Display All Students" << std::endl;
    std::cout << "3. Search Student by ID" << std::endl;
    std::cout << "4. Update Student" << std::endl;
    std::cout << "5. Delete Student" << std::endl;
    std::cout << "6. Exit" << std::endl;
    std::cout << "Please choose an option: ";
}

void addStudent(std::vector<Student>& students)
{
    Student newStudent;

    std::cout << "Enter student ID: ";
    std::getline(std::cin, newStudent.id);

    std::cout << "Enter student name: ";
    std::getline(std::cin, newStudent.name);

    std::cout << "Enter student age: ";
    std::cin >> newStudent.age;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter student course: ";
    std::getline(std::cin, newStudent.course);

    std::cout << "Enter student grade: ";
    std::getline(std::cin, newStudent.grade);

    students.push_back(newStudent);

    std::cout << "Student record added successfully." << std::endl;
}

void displayStudents(const std::vector<Student>& students)
{
    if (students.empty())
    {
        std::cout << "No student records found." << std::endl;
        return;
    }

    std::cout << std::endl;
    std::cout << "========== Student Records ==========" << std::endl;

    for (const Student& student : students)
    {
        std::cout << "Student ID: " << student.id << std::endl;
        std::cout << "Name      : " << student.name << std::endl;
        std::cout << "Age       : " << student.age << std::endl;
        std::cout << "Course    : " << student.course << std::endl;
        std::cout << "Grade     : " << student.grade << std::endl;
        std::cout << "------------------------------------" << std::endl;
    }
}

void searchStudent(const std::vector<Student>& students)
{
    std::string searchId;

    std::cout << "Enter student ID to search: ";
    std::getline(std::cin, searchId);

    for (const Student& student : students)
    {
        if (student.id == searchId)
        {
            std::cout << "Student found:" << std::endl;
            std::cout << "Student ID: " << student.id << std::endl;
            std::cout << "Name      : " << student.name << std::endl;
            std::cout << "Age       : " << student.age << std::endl;
            std::cout << "Course    : " << student.course << std::endl;
            std::cout << "Grade     : " << student.grade << std::endl;
            return;
        }
    }

    std::cout << "Student with ID " << searchId << " was not found." << std::endl;
}

void updateStudent(std::vector<Student>& students)
{
    std::string searchId;

    std::cout << "Enter student ID to update: ";
    std::getline(std::cin, searchId);

    for (Student& student : students)
    {
        if (student.id == searchId)
        {
            std::cout << "Student found. Enter new details." << std::endl;

            std::cout << "Enter new name: ";
            std::getline(std::cin, student.name);

            std::cout << "Enter new age: ";
            std::cin >> student.age;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << "Enter new course: ";
            std::getline(std::cin, student.course);

            std::cout << "Enter new grade: ";
            std::getline(std::cin, student.grade);

            std::cout << "Student record updated successfully." << std::endl;
            return;
        }
    }

    std::cout << "Student with ID " << searchId << " was not found." << std::endl;
}

void deleteStudent(std::vector<Student>& students)
{
    std::string searchId;

    std::cout << "Enter student ID to delete: ";
    std::getline(std::cin, searchId);

    for (auto it = students.begin(); it != students.end(); ++it)
    {
        if (it->id == searchId)
        {
            students.erase(it);
            std::cout << "Student record deleted successfully." << std::endl;
            return;
        }
    }

    std::cout << "Student with ID " << searchId << " was not found." << std::endl;
}

int main()
{
    std::vector<Student> students;
    int choice;

    while (true)
    {
        displayMenu();
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choice)
        {
        case 1:
            addStudent(students);
            break;

        case 2:
            displayStudents(students);
            break;

        case 3:
            searchStudent(students);
            break;

        case 4:
            updateStudent(students);
            break;

        case 5:
            deleteStudent(students);
            break;

        case 6:
            std::cout << "Thank you for using the Student Record Management System." << std::endl;
            return 0;

        default:
            std::cout << "Invalid option. Please choose again." << std::endl;
        }
    }
}
