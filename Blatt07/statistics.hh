#ifndef STATISTICS_HH
#define STATISTICS_HH

#include <algorithm>
#include <vector>
#include <cmath>
#include <iostream>

// Return the mean
template <typename T>
//template <typename Zahl, typename T<typename Zahl>>
typename T::value_type mean(const T &v)
//Zahl mean(const T<Zahl> &v)
{
    typename T::value_type sum = 0;
    for (auto e : v)
        sum += e;

    return sum / v.size();
}

// Return the median
template <typename T>
typename T::value_type median(const T &v)
{
    if (v.size() == 0)
        return 0;

    auto v2(v);
    std::sort(v2.begin(), v2.end());

    if (v.size() % 2 == 0)
    {
        return 0.5 * (v2[v.size() / 2 - 1] + v2[v.size() / 2]);
    }
    else
    {
        return v2[(v.size() + 1) / 2 - 1];
    }
}

// Return the k'th moment
template <typename T>
typename T::value_type moment(const T &v, int k)
{
    typename T::value_type sum = 0;
    for (auto e : v)
        sum += std::pow(e, k);

    return sum / v.size();
}

// Return the standard deviation
template <typename T>
// auto seems to work too
auto std_dev(const T &v)
{
    typename T::value_type m = mean(v);
    typename T::value_type sum = 0;
    for (auto e : v)
        sum += (m - e) * (m - e);

    return std::sqrt(sum / v.size());
}

// Return a variety of statistics
template <typename T>
void statistics(const T &v)
{
    std::cout << "mean: " << mean(v) << std::endl;
    std::cout << "median: " << median(v) << std::endl;
    std::cout << "second moment: " << moment(v, 2) << std::endl;
    std::cout << "std_dev: " << std_dev(v) << std::endl;
}

#endif // STATISTICS_HH