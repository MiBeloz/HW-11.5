#pragma once

#include "Rhombus.h"


namespace FigureLibrary {
	class Square : public Rhombus {
	public:
		Square(const int lengthABCD);

		std::string getName() override;

		bool getCorrect() override;
	};
}