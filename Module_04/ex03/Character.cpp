#include "Character.hpp"

Character::Character(std::string name){
	this->name = name;
	enventory = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		enventory[i] = NULL;
}
Character::Character(const Character& c){
	this->name = c.name;
	enventory = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		if (c.enventory[i])
			enventory[i] = c.enventory[i]->clone();
}
Character& Character::operator= (const Character& c) {
	this->name = std::string(c.name);
	for (int i = 0; i < 4; i++)
		if (c.enventory[i])
			enventory[i] = c.enventory[i]->clone();
	return (*this);
}
Character::~Character(){
	for (int i = 0; i < 4; i++)
		if (enventory[i])
			delete enventory[i];
	
	delete[] enventory;
}


std::string const& Character::getName() const {return name;}

void	Character::equip(AMateria* m){
	int i = 0;
	if (m == NULL)
		return ;
	while (i < 4) {
		if (enventory[i] == NULL)
			break ;
		i++;
	}
	if (i < 4)
		enventory[i] = m;
	return;
}

void	Character::unequip(int idx){
	if (idx < 0 || idx > 3)
		return ;
	enventory[idx] = NULL;
}

void	Character::use(int idx, Character& target){
	if (idx < 0 || idx > 3)
		return;
	if (enventory[idx] == NULL)
		return;
	enventory[idx]->use(target);
}
