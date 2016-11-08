#ifndef CIRCLE_H
#define CIRCLE_H


class Circle {
    public:
        Circle(float in_radius);
        float get_circumference();
        float get_area();
    private:
        float radius;
};

#endif // CIRCLE_H

    // Create a `Circle` class that takes it's radius as constructor parameter
    // It should have a `get_circumference` method that returns it's circumference
    // It should have a `get_area` method that returns it's area
