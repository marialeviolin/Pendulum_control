#pragma once

#include "State.hpp"

class PendulumModel{
	public:

		PendulumModel();
		State derivatives(const State& state, double force) const;

	private:
		double M;
		double m;
		double b;
		double l;
		double I;
		double g;
		   };
