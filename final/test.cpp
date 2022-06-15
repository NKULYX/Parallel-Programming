//
// Created by TTATT on 2022/5/5.
//

#include <iostream>
#include "KMeans.h"
using namespace std;

int main() {
    KMeans kMeans = KMeans(5, 100);
    float** testData = KMeans::getTestData(1000,4,5);
    kMeans.initData(testData, 1000, 4);
    kMeans.fit();
    kMeans.printResult();
    return 0;
}
