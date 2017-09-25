/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *
 *************************************************************************/

#include "../src/header.h"

namespace {
	const string unk = "unknown";
	const string clone_prefix = "clone-";

	// -- interface --
	class Animal {
		//Defaults to private
		string _type = "";
		string _name = "";
		string _sound = "";
	public:
		Animal();   // default constructor
		Animal(const string & type,
			   const string & name,
			   const string & sound);

		Animal(const Animal &); // copy constructor
		Animal & operator=(const Animal &); // copy operator

		~Animal();  // destructor

		void print() const;
	};

	// -- implementation --
	Animal::Animal() : _type(unk),
					  _name(unk),
					  _sound(unk) {
		puts("\n> default constructor");
	}

	Animal::Animal(const string & type,
				   const string & name,
				   const string & sound)
	: _type(type), _name(name), _sound(sound) {
		puts("\n> constructor with arguments");
	}

	Animal::Animal(const Animal & a) {
		puts("> copy constructor");
		_name = clone_prefix + a._name;
		_type = a._type;
		_sound = a._sound;
	}

	Animal::~Animal() {
		printf("\n> destructor: %s the %s", _name.c_str(), _type.c_str());
	}

	void Animal::print () const {
		printf("\n> %s the %s says %s", _name.c_str(), _type.c_str(), _sound.c_str());
	}

	Animal & Animal::operator=(const Animal & o) {
		puts("\n> assignment operator");
		if(this != &o) {
			_name = clone_prefix + o._name;
			_type = o._type;
			_sound = o._sound;
		}
		return *this;
	}
} //end of anonymous namespace

void Constructors1(void) {
    Animal a;
    a.print();

    const Animal b("goat", "bob", "baah");
    b.print();

    const Animal c = b;
    c.print();

    a = c;
    a.print();

}
