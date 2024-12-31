#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v4
{
	class animal {
	public:
		virtual std::string species() const = 0;
		virtual unsigned int legs() const = 0;
	};

	class insect: public animal {
	public:
		unsigned int legs() const override;
	};

	class bird: public animal {
	public:
		unsigned int legs() const override;
	};

	class spider: public animal {
	public:
		unsigned int legs() const override;
	};

	class tarantula : public spider {
	public:
		std::string species() const override;
		tarantula();
	};

	class cockroach : public insect {
	public:
		std::string species() const override;
		cockroach();
	};

	class sparrow : public bird {
	public:
		std::string species() const override;
		sparrow();
	};

	class leg_counter {
	public:
		unsigned int l = 0;
		std::string add_animal(animal* an);
		unsigned int legs();
	};

	class animal_factory {
	public:
		animal* an = nullptr;
		animal* get();
		animal_factory(int);
	};
}