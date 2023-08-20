/*
* Student.h - Includes the variables and functions required to create a student object. Information includes a student's name, their birth year, and 
* their current score (points earned in the class). This information will be used to calculate their letter grade and display the student's information.
* The student class object linked to a classSection object and is created after the classSection object is built. The number of students in a class is
* based on how many the user wishes to set.
*/

#include <string>

class student {
	public:
		void setStudentName(std::string);        //Set the student name based on input
		std::string getStudentName();            //Get the student name from object
		void setBirthYear(int);                  //Set the student birth year based on input
		int getBirthYear();                      //Get the student birth year from object
		void setPointsEarned(int);               //Set the student points earned based on input
		int getPointsEarned();                   //Get the student points earned from object
		char calcLetterGrade(int);               //Return a letter grade based and a student's points earned
		void listStudentInfo();                  //Lists relevant information about the student 

		student();                           //Default constructor
		student(std::string, int, int);      //Parameter-based constructor
		~student();                          //Class destructor
	private:
		std::string studentName;         //Cannot be blank on object creation
		int birthYear;                   //Entry must be four digits
		int pointsEarned;                //Must be beween 0 and 1010
};