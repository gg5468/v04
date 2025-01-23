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
	};

	class cockroach : public insect {
	public:
		std::string species() const override;
	};

	class sparrow : public bird {
	public:
		std::string species() const override;
	};

	class leg_counter {
	public:
		std::string add_animal(animal* an);
		unsigned int legs();
	private:
		unsigned int l = 0;
	};

	std::unique_ptr<animal> animal_factory(const int animal_number);
}