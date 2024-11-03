#ifndef SENTIMENTCLASSIFIER_H
#define SENTIMENTCLASSIFIER_H

#include <map>
#include <vector>
#include <fstream>
#include "DSString.h"

class SentimentClassifier {
private:
    std::map<DSString, int> positiveWordCount;
    std::map<DSString, int> negativeWordCount;
    int totalPositiveTweets;
    int totalNegativeTweets;

public:
    SentimentClassifier();

    void train(const char* trainingDataFile);
    void predict(const char* testingDataFile, const char* resultsFile);
    void evaluatePredictions(const char* groundTruthFile, const char* accuracyFile);
};

#endif // SENTIMENTCLASSIFIER_H
