#pragma once
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include <iostream>

class AMateria;

class MateriaSource : public IMateriaSource
{
private:
	AMateria	**materias;
public:

	MateriaSource();
	MateriaSource(const MateriaSource& m);
	MateriaSource& operator= (const MateriaSource& m);
	~MateriaSource();


	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif