#include "SentimentClassifier.h"
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc != 6) {
        std::cerr << "Usage: ./sentiment <training data> <testing data> <testing ground truth> <results file> <accuracy file>" << std::endl;
        return 1;
    }

    SentimentClassifier classifier;
    classifier.train(argv[1]);
    classifier.predict(argv[2], argv[4]);
    classifier.evaluatePredictions(argv[3], argv[5]);

    return 0;
}
