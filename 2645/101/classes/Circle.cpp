#include "Circle.h"

void Circle::set_radius(float radius) { _radius = radius; }

float Circle::get_area() { return PI * _radius * _radius; }

float Circle::get_circumference() { return PI * 2 * _radius; }

float Circle::get_diameter() { return 2 * _radius; }