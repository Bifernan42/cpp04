#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(std::string);
		Cat(const Cat &);
		Cat & operator=(const Cat &);
		~Cat();
		void makeSound() const;
};

#endif
