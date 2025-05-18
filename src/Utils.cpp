#include "Utils.hh"
#include <random>

static std::mt19937 rng(std::random_device{}());


double Utils::uniform_distribution(double min, double max) {
    std::uniform_real_distribution<double> dist(min, max);
    return dist(rng);
}

double Utils::normal_distribution(double mean, double stddev) {
    std::normal_distribution<double> dist(mean, stddev);
    return dist(rng);
}

double Utils::poisson_distribution(double mean) {
    std::poisson_distribution<int> dist(mean);
    return dist(rng);
}

double Utils::SimpleTrapzIntegral(const vector<double>& x, const vector<double>& y) {
    if (x.size() != y.size() || x.size() < 2) {
        throw std::invalid_argument("x and y must have the same size and at least two elements.");
    }

    double integral = 0.0;
    for (size_t i = 1; i < x.size(); ++i) {
        integral += 0.5 * (y[i] + y[i - 1]) * (x[i] - x[i - 1]);
    }
    return integral;
}
