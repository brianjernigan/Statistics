//
//  stats.cpp
//  Statistics_280
//
//  Created by Brian Jernigan on 5/7/23.
//

#include "stats.h"
#include "p1_library.h"
#include <cassert>
#include <vector>
#include <cmath>

using namespace std;

vector<pair<double, int> > summarize(vector<double> v) {
  assert(false);
}

int count(vector<double> v) {
    return (int)v.size();
}

double sum(vector<double> v) {
    double sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
    }
    return sum;
}

double mean(vector<double> v) {
    return (sum(v) / v.size());
    
}

double median(vector<double> v) {
    sort(v);
    size_t vSize = v.size();
    double middleIndex = v.size() / 2.0;
    
    // check if odd
    if (vSize % 2 != 0) {
        return v[floor(middleIndex)];
    } else {
        return (v[middleIndex] + v[middleIndex-1]) / 2.0;
    }
}

double mode(vector<double> v) {
    sort(v);
    double count = 1;
    double maxFrequency = 1;
    double lesserMode = v[0];
    
    for (int i = 0; i < v.size() - 1; i++) {
        if (v[i] == v[i+1]) {
            count++;
            if (count > maxFrequency) {
                maxFrequency = count;
                lesserMode = v[i];
            }
        } else {
            count = 1;
        }
    }
    return lesserMode;
}

double min(vector<double> v) {
    sort(v);
    return v[0];
}

double max(vector<double> v) {
    sort(v);
    return v[v.size()-1];
}

double stdev(vector<double> v) {
    vector<double> meanDifferences;
    double vMean = mean(v);
    for (int i = 0; i < v.size(); i++) {
        double meanDifference = v[i] - vMean;
        double squaredValue = meanDifference * meanDifference;
        meanDifferences.push_back(squaredValue);
    }
    
    double differencesSum = sum(meanDifferences);
    double correction = (1.0 / (v.size() - 1.0));
    double underRoot = differencesSum * correction;
    return sqrt(underRoot);
}

double percentile(vector<double> v, double p) {
  assert(false);
}

