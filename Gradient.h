#pragma once
#include <string>
#include <vector>

struct GradientStop {
    float offset;
    std::string color;
    float opacity;

    GradientStop() : offset(0.0f), color("#000000"), opacity(1.0f) {}
};

class Gradient {
public:
    std::string id;
    std::string type;

    // Linear
    float x1, y1, x2, y2;

    // Radial
    float cx, cy, r;


    std::vector<GradientStop> stops;

    Gradient() : x1(0), y1(0), x2(1), y2(0), cx(0.5f), cy(0.5f), r(0.5f) {}
    Gradient(const std::string& id_, const std::string& type_)
        : id(id_), type(type_), x1(0), y1(0), x2(1), y2(0), cx(0.5f), cy(0.5f), r(0.5f) {}

    virtual ~Gradient() {}
};
