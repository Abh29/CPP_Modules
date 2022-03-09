#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	materias = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& m){
	materias = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		if (m.materias[i])
			materias[i] = m.materias[i]->clone();
		else
			materias[i] = NULL; 
}

MateriaSource& MateriaSource::operator= (const MateriaSource& m){
	materias = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		if (m.materias[i])
			materias[i] = m.materias[i]->clone();
		else
			materias[i] = NULL; 
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++)
		if (materias[i])
			delete materias[i];
	delete[] materias;	
}

void	MateriaSource::learnMateria(AMateria* m){
	int i = 0;
	while (i < 4 && materias[i])
		i++;	
	if (i < 4)
		materias[i] = m->clone();
}

AMateria* MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++)
	{
		if (materias[i] && materias[i]->getType() == type)
			return (materias[i]->clone());
	}
	return (NULL);
}
