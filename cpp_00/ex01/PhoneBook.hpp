#ifndef __PHONEBOOK_HPP__
#define __PHONEBOOK_HPP__

#include "Contact.hpp"

#define MAX_CONTACT 8
#define MAX_WIDTH 10

class	PhoneBook {
	public:
		PhoneBook();
		std::string	input(std::string prompt);
		void		AddContact(	std::string _fname,
								std::string _lname,
								std::string _nname,
								std::string _phoneNumber,
								std::string _darkestSecret);
		void		AddPrompt();
		void		SearchContacts();
		void		PrintContacts();
		void		PrintInfo(std::string str);
		void		Error(std::string errMsg);
		void		MainLoop();
	private:
		int		index;
		int		count;
		Contact contacts[MAX_CONTACT];
};

#endif