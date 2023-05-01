#pragma once

#include "Vec3.h"

class Ray {
    Point3 orig;
    Vec3 dir;

    public:
        Ray() {}
        Ray(const Point3& origin, const Vec3& direction)
            : orig(origin), dir(direction)
        {}

        Point3 getOrigin() const  { return orig; }
        Vec3 getDirection() const { return dir; }

        Point3 at(double t) const {
            return orig + t*dir;
        }    
};
