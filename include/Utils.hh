/**
 * @file Utils.hh
 * @author Zach Peng (zhipzhang@foxmail.com)
 * @brief This file contains some utilities to produce random numbers following a distribution and integral methods.
 * @version 0.1
 * @date 2025-05-18
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#pragma once

#include <vector>


using std::vector;
namespace Utils {
    /**
     * @brief Generates a random number uniformly distributed between min and max.
     * 
     * @param min The lower bound of the random number.
     * @param max The upper bound of the random number.
     * @return A random number uniformly distributed between min and max.
     */
    double uniform_distribution(double min, double max);

    /**
     * @brief Generates a random number following a normal distribution.
     * 
     * @param mean The mean of the normal distribution.
     * @param stddev The standard deviation of the normal distribution.
     * @return A random number following a normal distribution.
     */
    double normal_distribution(double mean, double stddev);

    /**
     * @brief Generates a random number following a Poisson distribution.
     * 
     * @param mean The mean of the Poisson distribution.
     * @return A random number following a Poisson distribution.
     */
    double poisson_distribution(double mean);

    /**
     * @brief Computes the integral of a function using the trapezoidal rule.
     * 
     * @param x The x-coordinates of the data points.
     * @param y The y-coordinates of the data points.
     * @return The approximate integral of the function.
     */
    double SimpleTrapzIntegral(const vector<double>& x, const vector<double>& y);
}
