#include "SentimentClassifier.h"
#include <sstream>
#include <iostream>

// Constructor
SentimentClassifier::SentimentClassifier() : totalPositiveTweets(0), totalNegativeTweets(0) {}

// Training function
void SentimentClassifier::train(const char* trainingDataFile) {
    std::ifstream file(trainingDataFile);
    if (!file.is_open()) {
        std::cerr << "Error opening training data file." << std::endl;
        return;
    }
    DSString line;
    while (std::getline(file, line.c_str())) {
        // Tokenize the line and process words
        // Increment positive or negative word counts based on sentiment label
    }
    file.close();
}

// Prediction function
void SentimentClassifier::predict(const char* testingDataFile, const char* resultsFile) {
    std::ifstream file(testingDataFile);
    std::ofstream results(resultsFile);
    if (!file.is_open() || !results.is_open()) {
        std::cerr << "Error opening testing data or results file." << std::endl;
        return;
    }
    DSString line;
    while (std::getline(file, line.c_str())) {
        // Process the line and classify as positive or negative
        // Write the classification result to results file
    }
    file.close();
    results.close();
}

// Evaluation function
void SentimentClassifier::evaluatePredictions(const char* groundTruthFile, const char* accuracyFile) {
    std::ifstream groundTruth(groundTruthFile);
    std::ifstream predictions("results.csv");
    std::ofstream accuracyOut(accuracyFile);

    if (!groundTruth.is_open() || !predictions.is_open() || !accuracyOut.is_open()) {
        std::cerr << "Error opening ground truth or predictions file." << std::endl;
        return;
    }

    // Compare predictions with ground truth and calculate accuracy
    accuracyOut << "Accuracy: [calculated accuracy]" << std::endl;

    groundTruth.close();
    predictions.close();
    accuracyOut.close();
}
