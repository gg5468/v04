#include "app.h"
#include <algorithm>

namespace vsite::oop::v4
{
	unsigned int insect::legs() const {
		return 6;
	}
	unsigned int bird::legs() const {
		return 2;
	}
	unsigned int spider::legs() const {
		return 8;
	}
	std::string cockroach::species() const {
		return "cockroach";
	}
	std::string tarantula::species() const {
		return "tarantula";
	}
	std::string sparrow::species() const {
		return "sparrow";
	}

	cockroach::cockroach() {};
	sparrow::sparrow() {};
	tarantula::tarantula() {};

	std::string leg_counter::add_animal(animal* an)
	{
		l += an->legs();
		return an->species();
	}

	unsigned int leg_counter::legs() {
		return l;
	}

	animal_factory::animal_factory(int i) {
		if (i == 1) {
			an = new cockroach;
		}
		else if (i == 2) {
			an = new sparrow;
		}
		else if (i == 3) {
			an = new tarantula;
		}
	}

	animal* animal_factory::get() {
		return an;
	}
}