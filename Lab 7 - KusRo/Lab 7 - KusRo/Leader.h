#pragma once
/*
* Leader.h - Consists of public and private members that store and manipulates data pertaining to a leader. This class inherits public 
* functions from the Person class.
*/

#include <string>
#include <cstdlib>
#include <cctype>
#include "Date.h"
#include "Person.h"

class Leader : public Person {
		friend std::ostream& operator<<(std::ostream&, Leader);         //Display Leader information.
	public:
		//Set a leader's division
		void setDivision(std::string divisionName) {
			division = divisionName;
		}

		//Get a leader's division
		std::string getDivision() {
			return division;
		}

		//Set a leader's promotion date
		void setDatePromoted(Date promotionDate) {
			datePromoted = promotionDate;
		}

		//Get a leader's promotion date
		Date getDatePromoted() {
			return datePromoted;
		}

		//Set a leader's title
		void setTitle(std::string titleName) {
			title = titleName;
		}

		//Get a leader's title
		std::string getTitle() {
			return title;
		}

		//Set a leader's last team lead
		void setLastTeamLead(std::string prevTeamLead) {
			lastTeamLead = prevTeamLead;
		}

		//Get a leader's last team lead
		std::string getLastTeamLead() {
			return lastTeamLead;
		}

		//Set a leader's annual salary
		void setAnnualSalary(double yearlySalary) {
			annualSalary = yearlySalary;
		}

		//Get a leader's annual salary
		double getAnnualSalary() {
			return annualSalary;
		}

		//Default constructor
		Leader() : Person()
		{
			setDivision("");
			setDatePromoted(Date());
			setTitle("");
			setLastTeamLead("");
			setAnnualSalary(NULL);
		}

		//Parameter-based constructor
		Leader(std::string idNumber, std::string personFirstName, std::string personLastName, Date personBirthDate,
			std::string divisionName, Date promotionDate, std::string titleName, std::string prevTeamLead, double yearlySalary)
			:Person(idNumber, personFirstName, personLastName, personBirthDate)
		{
			setDivision(divisionName);
			setDatePromoted(promotionDate);
			setTitle(titleName);
			setLastTeamLead(prevTeamLead);
			setAnnualSalary(yearlySalary);
		}

		//Destructor
		~Leader() {
		}		

	private:
		std::string division;        //The division a leader works for
		Date datePromoted;           //A leader's promotion date
		std::string title;           //A leader's title
		std::string lastTeamLead;    //The last team a leader lead
		double annualSalary;         //A leader's annual salary
};

//Display Leader information. Uses the Person class's getFullName() function
std::ostream& operator<<(std::ostream& output, Leader l) {
	output << "Leader ID: " << std::setw(56) << std::setfill(' ') << l.getId() << std::endl;
	output << "Leader Name: " << std::setw(54) << std::setfill(' ') << l.getFullName()
		+ " - " + l.getTitle() + " - " + l.getDivision() << std::setfill(' ') << std::endl;
	output << "Birth Date: " << std::setw(48) << std::setfill(' ') << l.getBirthDate() << std::endl;
	output << "Date Promoted: " << std::setw(45) << std::setfill(' ') << l.getDatePromoted() << std::endl;
	output << std::setprecision(2) << std::fixed
		<< "Salary: " << std::setw(59) << std::setfill(' ') << l.getAnnualSalary() << std::endl;
	output << "Last Team Led: " << std::setw(52) << std::setfill(' ')
		<< l.getLastTeamLead() << std::endl << std::endl;
	return output;
}