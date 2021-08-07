#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(	std::string _fname,
					std::string _lname,
					std::string _nname,
					std::string _phoneNumber,
					std::string _darkestSecret):	fname(_fname),
													lname(_lname),
													nname(_nname),
													phoneNumber(_phoneNumber),
													darkestSecret(_darkestSecret)
{}

std::string	Contact::getFname() {
	return (this->fname);
}

std::string	Contact::getLname() {
	return (this->lname);
}

std::string	Contact::getNname() {
	return (this->nname);
}

std::string	Contact::getPnumb() {
	return (this->phoneNumber);
}

std::string	Contact::getDsecr() {
	return (this->darkestSecret);
}
