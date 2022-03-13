#include "Contact.hpp"

Contact::Contact(){}

Contact::Contact(std::string firstName,
				std::string lastName, 
				std::string nickName,
				std::string phoneNumber,
				std::string darkestSecret)
				{
					setFirstName(firstName);
					setLastName(lastName);
					setNickName(nickName);
					setPhoneNumbe(phoneNumber);
					setDarkestSecret(darkestSecret);
				}

Contact::~Contact(){};

void Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

void Contact::setNickName(std::string nickName)
{
	this->nickName = nickName;
}

void Contact::setPhoneNumbe(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

std::string	Contact::getFirstName(void){return firstName;}
std::string	Contact::getLastName(void){return lastName;}
std::string	Contact::getNickName(void){return nickName;}
std::string	Contact::getPhoneNumber(void){return phoneNumber;}
std::string	Contact::getDarkestSecret(void){return darkestSecret;}

bool	Contact::equals(Contact contact)
{
	return (equals(contact.getPhoneNumber()));
}

bool	Contact::equals(std::string phoneNumber)
{
	return (this->phoneNumber == phoneNumber);
}

std::string	Contact::toString(void)
{
	std::string out;

	out = "first_name = " + getFirstName() + 
		  "\nlast_name = " + getLastName() +
		  "\nnick_name = " + getNickName() +
		  "\nphone_number = " + getPhoneNumber()+
		  "\ndarkest_secret = " + getDarkestSecret();
	return (out);
}