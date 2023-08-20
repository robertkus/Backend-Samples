#pragma once
/*
* TeamMember.h - Consists of public and private members that store and manipulates data pertaining to a team member. This class inherits 
* public functions from the Person class.
*
* Reference -
*           dotti & mfontanini (2012).Sort a vector of objects by an object's attribute [duplicate]. Stack Overflow.
*                  https://stackoverflow.com/questions/9706517/sort-a-vector-of-objects-by-an-objects-attribute
*/

#include <string>
#include <cstdlib>
#include <cctype>
#include "Date.h"
#include "Person.h"

class TeamMember : public Person {
		friend std::ostream& operator<<(std::ostream&, TeamMember);                 //Display Team Member information
	public:
		//Set a team member's department
		void setDepartment(std::string deptName) {
			department = deptName;
		};

		//Get a team member's department
		std::string getDepartment() {
			return department;
		};

		//Set a team member's hire date
		void setDateHired(Date hireDate) {
			dateHired = hireDate;
		};

		//Get a team member's hire date
		Date getDateHired() {
			return dateHired;
		}

		//Set a team member's position/job title
		void setPosition(std::string positionName) {
			position = positionName;
		}

		//Get a team member's position/job title
		std::string getPosition() {
			return position;
		}

		//Set a team member's skill level
		void setSkillLevel(std::string empSkillLevel) {
			skillLevel = empSkillLevel;
		}

		//Get a team member's skill level
		std::string getSkillLevel() {
			return skillLevel;
		}

		//Set a team member's last performance rating
		void setLastRating(double prevRating) {
			lastRating = prevRating;
		}

		//Get a team member's last performance rating
		double getLastRating() {
			return lastRating;
		}


		//Allows team members in a list to be sorted by Id
		//(dotti & mfontanini, 2012)
		bool operator< (TeamMember& other)
		{
			return getId() < other.getId();
		}

		//Default constructor
		TeamMember(): Person()
		{
			setDepartment("");
			setDateHired(Date());
			setPosition("");
			setSkillLevel("");
			setLastRating(NULL);
		}

		//Parameter-based constructor
		TeamMember(std::string idNumber, std::string personFirstName, std::string personLastName, Date personBirthDate,
			std::string deptName, Date hireDate, std::string positionName, std::string empSkillLevel, double prevRating)
			:Person(idNumber, personFirstName, personLastName, personBirthDate)
		{
			setDepartment(deptName);
			setDateHired(hireDate);
			setPosition(positionName);
			setSkillLevel(empSkillLevel);
			setLastRating(prevRating);
		}

		//Destructor
		~TeamMember() {
		}

	private:
		std::string department;  //A team member's work department
		Date dateHired;          //Date a team member was hired
		std::string position;    //A team member's position (Programmer, Writer, etc.)
		std::string skillLevel;  //A team member's skill level (Entry Level, Skilled, Master)
		double lastRating;       //A team member's last performance rating, from 1.0 - 5.0
};

//Display Team Member information. Uses the Person class's getFullName() friend function
std::ostream& operator<<(std::ostream& output, TeamMember m) {
	output << "TeamMember ID: " << std::setw(52) << std::setfill(' ') << m.getId() << std::endl;
	output << "TeamMember Name: " << std::setw(50) << std::setfill(' ') << m.getFullName() << std::endl;
	output << "Birth Date: " << std::setw(48) << std::setfill(' ') << m.getBirthDate() << std::endl;
	output << "Date Hired: " << std::setw(48) << std::setfill(' ') << m.getDateHired() << std::endl;
	output << "Department: " << std::setw(55) << std::setfill(' ') << m.getDepartment() << std::endl;
	output << "Position: " << std::setw(57) << std::setfill(' ') << m.getPosition() << std::endl;
	output << "Skill Level: " << std::setw(54) << std::setfill(' ') << m.getSkillLevel() << std::endl;
	output << std::fixed << std::setprecision(1) << "Last Performance Rating: " << std::setw(42)
		<< std::setfill(' ') << m.getLastRating() << std::endl << std::endl;
	return output;
}