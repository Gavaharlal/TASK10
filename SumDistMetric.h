//
// Created by Computer on 26.12.2018.
//

#ifndef TASK10_SUMDISTMETRIC_H
#define TASK10_SUMDISTMETRIC_H

#include "MetricI.h"


class SumDistMetric : public MetricI {
public:
    std::string getName() override;
    std::string getDescription() override;
    double calculateWeight(std::vector<std::vector<Point>> vector) override;

private:
    double getDistance(Point, Point);
};


#endif //TASK10_SUMDISTMETRIC_H
