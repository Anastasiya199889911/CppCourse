#pragma once

#include "vehicle.h"

class Truck : public Vehicle
{
public:
    Truck();
    Truck(const std::string& make,
          const std::string& model,
          const std::string& no,
          Color color,
          short year);

    void setMaxWeight(double max_weight);
    void setColor(Color color);
    Color getColor() const;

    void print() const;

private:
    double max_weight_;
};
