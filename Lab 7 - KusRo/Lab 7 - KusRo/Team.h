#pragma once
/*
* Team.h - Includes private and public members for storing and manipulation team information. This includes leader objects, a list/vector
* of team member objects, and other information relative to a team.
*
* Reference -
*           dotti & mfontanini (2012). Sort a vector of objects by an object's attribute [duplicate]. Stack Overflow.
*				   https://stackoverflow.com/questions/9706517/sort-a-vector-of-objects-by-an-objects-attribute
*/

#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cctype>
#include "Leader.h"
#include "TeamMember.h"

class Team {
	public:
		//Set the name of a team
		void setTeamName(std::string teamName) { name = teamName; }

		//Get the name of a team
		std::string getTeamName() { return name; }

		//Set the team's purpose
		void setPurpose(std::string teamPurpose) { purpose = teamPurpose; }

		//Get the team's purpose
		std::string getPurpose() { return purpose; }

		//Set the team's assigned leader
		void setAssignedLeader(Leader teamLeader) { assignedLeader = teamLeader; }

		//Get the team's assigned leader
		Leader getAssignedLeader() { return assignedLeader; }

		//Set the team's team size
		void setTeamSize(int sizeOfTeam) { teamSize = sizeOfTeam; }

		//Get the team's team size
		int getTeamSize() { return teamSize; }

		//Add a team member to a team, then sort list based on Id number
		void addMemberToTeam(TeamMember member) {
			teamMembers.push_back(member);
			teamMembers = sortTeamMembers();
		}

		//Get the current number of members assigned to the team
		int getCurrentTeamCount() {
			return int(teamMembers.size());
		}

		//Sort team members stored in the list based on Id number.
		//(dotti & mfontanini, 2012)
		std::vector< TeamMember > sortTeamMembers() {
			std::vector< TeamMember > newList = teamMembers;
			std::sort(newList.begin(), newList.end());
			return newList;
		}

		//Display Team Leader and Team Members
		void displayTeam() {
			std::cout << std::endl << "Information for Team" << std::endl;
			std::cout << "Team Name:      " << getTeamName() << std::endl;
			std::cout << "Team Purpose:   " << getPurpose() << std::endl << std::endl;

			if (getAssignedLeader().getId() == "") {
				std::cout << "No Leader is assigned to this team." << std::endl;
			}
			else {
				std::cout << getAssignedLeader();
			}

			std::cout << std::endl << std::endl;

			if (getCurrentTeamCount() == 0) {
				std::cout << "No Team Members are assigned to this team." << std::endl;
			}
			else {
				std::cout << "These are the Team Members assigned to the ' " + getTeamName() + " ' Team:" << std::endl;
				for (int i = 0; i < getCurrentTeamCount(); i++) {
					std::cout << teamMembers[i];
				}
			}

			std::cout << std::endl;
		}

		//Default constructor
		Team() 
		{
			setTeamName("");
			setPurpose("");
			setTeamSize(NULL);
		}

		//Parameter-based constructor
		Team(std::string teamName, std::string teamPurpose, int sizeOfTeam)
		{
			setTeamName(teamName);
			setPurpose(teamPurpose);
			setTeamSize(sizeOfTeam);
		};

		//Destructor
		~Team() {
		}

	private:
		std::string name;                        //The name of a team
		std::string purpose;                     //The purpose/objective of a team (Research, Marketing, etc.)
		Leader assignedLeader;                   //The leader assigned to a team
		std::vector <TeamMember> teamMembers;    //A vector containing the members of a team
		int teamSize;                            //The number of employees assigned to a team

};