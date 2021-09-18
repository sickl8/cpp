#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->index = 0;
	this->count = 0;
}

void		PhoneBook::AddContact(std::string _fname, std::string _lname, std::string _nname, std::string _phoneNumber, std::string _darkestSecret) {
	this->contacts[this->index] = Contact(_fname, _lname, _nname, _phoneNumber, _darkestSecret);
	this->index++;
	if (this->count < MAX_CONTACT)
		this->count++;
	this->index %= MAX_CONTACT;
}

void	PhoneBook::AddPrompt() {
	AddContact(	input("First Name: "),
				input("Last Name: "),
				input("Nickname: "),
				input("Phone Number: "),
				input("Darkest Secret: "));
}

std::string	PhoneBook::input(std::string prompt) {
	std::string	ret;

	std::cout << prompt;
	std::getline(std::cin, ret);
	if (ret[ret.length() - 1] == '\n')
		ret = ret.substr(0, ret.length() - 1);
	if (!ret.length())
	{
		std::cout << "BYE\n";
		exit(0);
	}
	return (ret);
}

void	PhoneBook::PrintInfo(std::string str) {
	std::cout << std::setw(MAX_WIDTH);
	if (str.length() > MAX_WIDTH)
		std::cout << str.substr(0, 9) + '.';
	else
		std::cout << str;
}

std::string	to_string(int x) {
	std::string ret= std::string("");
	int			i;

	for (i = 1; x / i > 9; i *= 10);
	for (; i; i /= 10) {
		ret.append((char[]){(x / i) % 10 + '0', '\0'});
	}
	return (ret);
}

int		to_int(std::string str) {
	int							ret = 0;
	std::string::const_iterator	itr;

	for (itr = str.begin(); itr != str.end() && std::isdigit(*itr); itr++) {
		ret *= 10;
		ret += *itr - '0';
	}
	return (ret);
}

void	PhoneBook::PrintContacts() {
	std::ostream &out = std::cout;
	out << "┌──────────┬";
	out << "──────────┬";
	out << "──────────┬";
	out << "──────────┐" << std::endl;
	out << "|";
	PrintInfo("index");
	out << "|";
	PrintInfo("first name");
	out << "|";
	PrintInfo("last name");
	out << "|";
	PrintInfo("nickname");
	out << "|" << std::endl;
	out << "├──────────┼";
	out << "──────────┼";
	out << "──────────┼";
	out << "──────────┤" << std::endl;
	for (int i = 0; i < this->count; i++) {
		out << "|";
		PrintInfo(to_string(i + 1));
		out << "|";
		PrintInfo(this->contacts[i].getFname());
		out << "|";
		PrintInfo(this->contacts[i].getLname());
		out << "|";
		PrintInfo(this->contacts[i].getNname());
		out << "|" << std::endl;
	}
	out << "└──────────┴";
	out << "──────────┴";
	out << "──────────┴";
	out << "──────────┘" << std::endl;
}

bool	is_number(const std::string& s) {
	std::string::const_iterator it = s.begin();
	while (it != s.end() && std::isdigit(*it))
		++it;
	return !s.empty() && it == s.end();
}

void	PhoneBook::Error(std::string errMsg) {
	std::cout << "PhoneBook Error: " << errMsg << std::endl;
}

void	PhoneBook::SearchContacts() {
	std::ostream	&out = std::cout;
	std::string		sIndex;
	int				index;

	if (!this->count) {
		this->Error("phonebook is empty");
		return ;
	}
	this->PrintContacts();
	sIndex = this->input("Index of desired contact: ");
	if (is_number(sIndex)) {
		index = to_int(sIndex) - 1;
		if (index > -1 && index < count)
		{
			out << "First Name: " << this->contacts[index].getFname() << std::endl;
			out << "Last Name: " << this->contacts[index].getLname() << std::endl;
			out << "Nickname: " << this->contacts[index].getNname() << std::endl;
			out << "Phone Number: " << this->contacts[index].getPnumb() << std::endl;
			out << "Darkest Secret: " << this->contacts[index].getDsecr() << std::endl;
		}
		else {
			this->Error("contact index out of bound");
		}
	}
	else {
		this->Error("not a valid number");
	}
}

void	PhoneBook::MainLoop() {
	std::string	command;
	while (true) {
		command = this->input("PhoneBook Command: ");
		if (command == "ADD")
			this->AddPrompt();
		else if (command == "SEARCH")
			this->SearchContacts();
		else if (command == "EXIT")
			return ;
		else
			this->Error("invalid command");
	}
}

int		main() {
	PhoneBook pb;

	pb.MainLoop();
	return (0);
}