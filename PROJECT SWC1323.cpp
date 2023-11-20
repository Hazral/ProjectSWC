/*

   Filename : PROJECT SWC1323.cpp
   Programmer : aral, idzham, irfan, hakimi
   Program description : to keep track of student’s personal information, studentName, studentID, scores, attendance.
   Date : 20 November 2023
*/

//Header files
#include <iostream>
#include <string.h>
using namespace std;

//Constant variabe declaration
const int MIN_STUDENTS = 50;
const int MAX_STUDENTS = 100;

//Variable declaration
int totalStudent;

// Function prototypes
void inputStudentData(int studentID[], string studentName[], double scores[], int attendance[], int totalStudent);
double calculateAverageScores( double scores[], int totalStudent);
void displayStudentRecords( int studentID[], string studentName[], double scores[], int attendance[], int totalStudent, double averageScore);

/*
   Program purpose: To demonstrate user-defined/programmer-defined
                    function.
                   
   Programmer: Hakimi
   Date: 20 November 2023
*/
// Main function
int main() {
	
	//Array declaration
    int studentID[MAX_STUDENTS];
    string studentName[MAX_STUDENTS];
    double scores[MAX_STUDENTS];
    int attendance[MAX_STUDENTS];
    
    //Variable declaration
    double averageScore;
    int totalStudent;
    
    cout << "\t\t\t\t\tSTARLIGHT HIGH SCHOOL STUDENT RECORD MANAGEMENT SYSTEM " <<endl;
	cout << "******************************************************************************************************************************************"<<endl;
	cout << " " << endl;
	cout << "Effortlessly input student ID, names, scores, and attendance on our user-friendly system\n" ;
	cout << "designed to streamline the teacher's administrative tasks, providing a seamless and efficient\n" ;
	cout << "platform for student record management.\n" ;
	cout << " " << endl;
	
	// Get the total of student from the user
    cout << "Enter the total of students (" << MIN_STUDENTS << " - " << MAX_STUDENTS << "): ";
    cin >> totalStudent;

    // Validate the total of student
    if (totalStudent < MIN_STUDENTS || totalStudent > MAX_STUDENTS) {
        cout << "Invalid input! Please read the terms above properly!\n";
        return 0;
    }
    
    // Function calls
    inputStudentData(studentID, studentName, scores, attendance, totalStudent);
    averageScore = calculateAverageScores(scores, totalStudent);
    displayStudentRecords(studentID, studentName, scores, attendance, totalStudent, averageScore);

    return 0;
    
}// End of main function

/*
   Program purpose: To demonstrate user-defined/programmer-defined
                    function.
                   
   Programmer: Hazral
   Date: 20 November 2023
*/
// Function to collect user input for student data
void inputStudentData(int studentID[], string studentName[], double scores[], int attendance[], int totalStudent) {
    
    //Enter numbers into array
    for (int i = 0; i < totalStudent; i++) {
    	cout << " " << endl;
    	cout << "Enter details for student (" << i + 1 << ")\n";
        cout << "Student ID : "; // Ask user to input student id
        cin >> studentID[i];

        cout << "Student Name : "; //Ask user to input student name
        cin.ignore(); // Clear newline from previous input
        getline(cin, studentName[i]); //Allows accepting and reading single and multiple line strings from the input stream
        
        cout << "Scores : "; // Ask user to input student student scores
        cin >> scores[i];

        cout << "Attendance (%): "; // Ask user to input student attendance
        cin >> attendance[i];
        
    } //End for
} //End of function

/*
   Program purpose: To demonstrate user-defined/programmer-defined
                    function.
                   
   Programmer: Irfan
   Date: 20 November 2023
*/
// Function to calculate the average scores
double calculateAverageScores( double scores[], int totalStudent) {
	
	//Variable declaration
    double sum = 0;
    
    //Enter numbers into array
    for (int i = 0; i < totalStudent; i++) {
        sum += scores[i];
    }//End for
    return sum / totalStudent; // calculate average scores
    
} //End of function

/*
   Program purpose: To demonstrate user-defined/programmer-defined
                    function.
                   
   Programmer: Idzham
   Date: 20 November 2023
*/
// Function to display student records
void displayStudentRecords(int studentID[], string studentName[], double scores[], int attendance[], int totalStudent, double averageScore) {
	cout << " \n" ;
	cout << " \n" ;
	cout << " \n" ;
	cout << "\t\t\t\t\tSTARLIGHT HIGH SCHOOL STUDENT RECORD MANAGEMENT SYSTEM " <<endl;
	cout << "******************************************************************************************************************************************"<<endl;
	cout << " " << endl;
	cout << "\t\t\t\t\t\t\tStudent Records "<<endl;
	cout << "******************************************************************************************************************************************"<<endl;
    cout << "\tStudent ID\t\t\t Student Name\t\t\t\tScores\t\t\t    Attendance" <<endl;
   
    //Enter numbers into array
    for (int i = 0; i < totalStudent; i++) {
        cout <<i+1<<".\t"<<studentID[i]<<"\t\t\t\t"<<studentName[i]<<"\t\t\t\t"<<scores[i]<<"\t\t\t\t"<<attendance[i]<<endl;
    }//End for

    cout << " " <<endl;
    cout << " " <<endl;
    cout << "Students Average Scores : " << averageScore << "\n";
    
} //End of function