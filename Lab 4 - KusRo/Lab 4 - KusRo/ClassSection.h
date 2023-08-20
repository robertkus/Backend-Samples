/*
* ClassSection.h - Includes the functions and variables needed to build a classSection object. Creates an academic class based what the user enters as 
* the class name, the section name, and the section's capacity. The user can then enter and store information pertaining to the students within that
* course.
*/

#include<string>

class classSection {
	public:
		void setClassName(std::string);            //Sets the class name from user input
		std::string getClassName();                //Gets the class name from user input
		void setSectionName(std::string);          //Sets the section name from user input
		std::string getSectionName();              //Gets the section name from user input
		void setSectionCapacity(int);              //Sets the section capacity from user input
		int getSectionCapacity();                  //Gets the section capacity from user input
		void addStudent(std::string, int, int);    //Add a student to a student class object
		void listStudents();                       //List information about the class name, section, and students in a class

		classSection();                                     //Default constructor
		classSection(std::string, std::string, int);        //Parameter-based constructor
		~classSection();                                    //Class destructor

	private:
		std::string className;               //Cannot be blank on object creation         
		std::string sectionName;             //Cannot be blank on object creation
		int sectionCapacity;                 //Must be between 1 and 10 on object creation
};
