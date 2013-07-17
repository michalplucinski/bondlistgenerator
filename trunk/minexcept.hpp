#ifndef MINEXCEPT_HPP
#define MINEXCEPT_HPP

#include <exception>

class BadOperator: public std::exception {};

class BadIndex: public std::exception {};

class BadStructureException: public std::exception {};

#endif
