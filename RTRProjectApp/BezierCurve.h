#pragma once


#include "Interpolation.h"


class bezier_curve : public Interpolation
{
		public:
		bezier_curve() = default;
		// Initializes a instance with a set of control points
		bezier_curve(std::vector<glm::vec3> pControlPoints);
		bezier_curve(bezier_curve&&) = default;
		bezier_curve(const bezier_curve&) = default;
		bezier_curve& operator=(bezier_curve&&) = default;
		bezier_curve& operator=(const bezier_curve&) = default;
		~bezier_curve() = default;

		glm::vec3 value_at(float t) override;

		glm::vec3 slope_at(float t) override;
};

