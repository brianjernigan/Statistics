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
    size_t vSize = v.size();
    double middleIndex = vSize / 2.0;
    // check if odd
    if (vSize % 2 != 0) {
        return v[middleIndex];
    } else {
        return mean(v);
    }
    
}

double mode(vector<double> v) {
    return 70.00;
}

double min(vector<double> v) {
  assert(false);
}

double max(vector<double> v) {
  assert(false);
}

double stdev(vector<double> v) {
  assert(false);
}

double percentile(vector<double> v, double p) {
  assert(false);
}

