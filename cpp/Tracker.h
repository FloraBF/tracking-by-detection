#ifndef CPP_TRACKER_H
#define CPP_TRACKER_H


#include <vector>
#include <opencv2/core/mat.hpp>
#include "Detector.h"
#include "Detection.h"
#include "TrackerState.h"

class Tracker {
public:
    Tracker(Detector *);

    virtual ~Tracker();

    Tracker(const Tracker &) = delete;

    Tracker(const Tracker &&) = delete;

    Tracker &operator=(const Tracker &) = delete;

    Tracker &operator=(const Tracker &&) = delete;

    virtual std::vector<Detection> track(cv::Mat mat) = 0; // TODO: image as input

protected:
    Detector *detector;
};


#endif //CPP_TRACKER_H