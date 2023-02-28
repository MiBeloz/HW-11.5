﻿#pragma once

#include "Quadrilateral.h"


namespace FigureLibrary {
	class Parallelogram : public Quadrilateral {
	public:
		Parallelogram(const int lengthAC, const int lengthBD, const int angleAC, const int angleBD);

		std::string getName() override;

		bool getCorrect() override;
	};
}