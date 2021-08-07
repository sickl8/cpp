#ifndef __CONTACT_HPP__
#define __CONTACT_HPP__

#include <string>

class	Contact {
	public:
		Contact();
		Contact(std::string _fname,
				std::string _lname,
				std::string _nname,
				std::string _phoneNumber,
				std::string _darkestSecret);
		std::string	getFname();
		std::string	getLname();
		std::string	getNname();
		std::string	getPnumb();
		std::string	getDsecr();
	private:
		std::string	fname;
		std::string	lname;
		std::string	nname;
		std::string	phoneNumber;
		std::string	darkestSecret;
};

#endif