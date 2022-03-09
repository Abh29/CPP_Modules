#pragma once
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include <iostream>

class MateriaSource : public IMateriaSource
{
private:
	AMateria	**materias;
public:

	MateriaSource();
	MateriaSource(const MateriaSource& m);
	MateriaSource& operator= (const MateriaSource& m);
	~MateriaSource() {}


	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

/*
createMateria(std::string const &)
Returns a new Materia. The latter is a copy of the Materia previously learned by
the MateriaSource whose type equals the one passed as parameter. Returns 0 if
the type is unknown.
*/

#endif