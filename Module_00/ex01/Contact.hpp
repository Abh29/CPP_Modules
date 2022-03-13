#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>


class Contact
{
	private:
		std::string	firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;

	public:
		Contact(void);
		Contact(std::string firstName,
				std::string lastName, 
				std::string nickName,
				std::string phoneNumber,
				std::string darkestSecret);
	
		~Contact();

		std::string getFirstName(void);
		std::string getLastName(void);
		std::string getNickName(void);
		std::string getPhoneNumber(void);
		std::string getDarkestSecret(void);


		void		setFirstName(std::string firstName);
		void		setLastName(std::string lastName);
		void		setNickName(std::string nickName);
		void		setPhoneNumbe(std::string phoneNumber);
		void		setDarkestSecret(std::string darkestSecret);

		bool		equals(Contact contact);
		bool		equals(std::string number);
		std::string	toString();
};

#endif
