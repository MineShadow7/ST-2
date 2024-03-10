// Copyright Karagodin Andrey 2024.
#ifndef ST_2_SRC_TASKS_CPP_
#define ST_2_SRC_TASKS_CPP_

#include "../include/tasks.h"

double task_1(double planetRadius, double newRadius) {
    Circle rope(planetRadius);
    rope.setRadius(newRadius);
    return rope.getRadius() - planetRadius;
}

double task_2(double poolRadius, double pathWidth, double concretePrice, double fencePrice) {
    Circle pool(poolRadius);
    Circle fence(poolRadius + pathWidth);
    return (fence.getArea() - pool.getArea()) * concretePrice + (fence.getArea() + fence.getFerence() * fencePrice);
}

#endif  // ST_2_SRC_TASKS_CPP_
