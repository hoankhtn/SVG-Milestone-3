#pragma once
#include "Gradient.h"
#include <vector>

class LinearGradient : public Gradient {
public:
    float x1, y1, x2, y2;
    std::vector<GradientStop> stops;

    LinearGradient();
    ~LinearGradient() override = default;
};
