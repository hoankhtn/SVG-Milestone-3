#pragma once
#include "Gradient.h"
#include <vector>

class RadialGradient : public Gradient {
public:
    float cx, cy;   
    float r;        
    float fx, fy;   
    std::vector<GradientStop> stops;

    RadialGradient();               
    ~RadialGradient() override = default;
};
