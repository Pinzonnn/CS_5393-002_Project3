/**
 * William Miller
 * CS5393-002 Project 3: Sentiment Analysis
 * This project builds a sentiment analysis tool that uses a custom DSString class and
 * a SentimentClassifier class to train on a set of tweets and predict sentiment for a test set.
 * The main objectives are to implement dynamic memory management, analyze runtime complexity,
 * and create a clear and well-documented code structure.
 */

#include <iostream>
#include <fstream>
#include <string>
#include "DSString.h"
#include "SentimentClassifier.h"

/**
 * Function to test the DSString class.
 * This ensures that basic operations such as construction, concatenation, and comparison work as expected.
 */
void testDSString() {
    std::cout << "Testing DSString class..." << std::endl;
    
    // Test the constructor
    DSString str1("Hello");
    DSString str2("World");

    // Test concatenation
    DSString str3 = str1 + " " + str2;
    std::cout << "Concatenation: " << str3 << std::endl; // Expected output: Hello World

    // Test length function
    std::cout << "Length of str3: " << str3.length() << std::endl; // Expected output: 11

    // Test equality operator
    if (str1 == DSString("Hello")) {
        std::cout << "Equality check passed." << std::endl;
    } else {
        std::cout << "Equality check failed." << std::endl;
    }

    // Test substring function
    DSString subStr = str3.substring(0, 5);
    std::cout << "Substring: " << subStr << std::endl; // Expected output: Hello

    // Test index operator
    std::cout << "Character at index 1 in str1: " << str1[1] << std::endl; // Expected output: e

    std::cout << "DSString class testing completed.\n" << std::endl;
}

/**
 * Function to test the SentimentClassifier class.
 * This function verifies the training, prediction, and evaluation methods of the classifier.
 */
void testSentimentClassifier() {
    std::cout << "Testing SentimentClassifier class..." << std::endl;

    // Instantiate the SentimentClassifier
    SentimentClassifier classifier;

    // Mock training data logic (use a small test data set)
    classifier.train("mock_training_data.csv"); // Replace with actual path if needed
    std::cout << "Training completed for test data." << std::endl;

    // Test prediction logic
    classifier.predict("mock_testing_data.csv", "mock_results.csv"); // Replace with actual path if needed
    std::cout << "Prediction completed for test data. Check mock_results.csv." << std::endl;

    // Test evaluation logic
    classifier.evaluatePredictions("mock_ground_truth.csv", "mock_accuracy.txt"); // Replace with actual path if needed
    std::cout << "Evaluation completed for test data. Check mock_accuracy.txt." << std::endl;

    std::cout << "SentimentClassifier class testing completed.\n" << std::endl;
}

/**
 * Main function to run the full sentiment analysis program.
 * This function takes command-line arguments for training, testing, and evaluation file paths.
 */
int main(int argc, char* argv[]) {
    // Ensure correct number of arguments
    if (argc != 6) {
        std::cerr << "Usage: ./sentiment_analysis <training data> <testing data> <ground truth> <results file> <accuracy file>" << std::endl;
        return 1;
    }

    // Display the program objectives
    std::cout << "CS5393-002 Project 3: Sentiment Analysis" << std::endl;
    std::cout << "Objective: Train a sentiment classifier on a dataset of tweets and evaluate its performance." << std::endl;

    // Create an instance of the SentimentClassifier
    SentimentClassifier classifier;

    // Train the classifier with the provided training data
    classifier.train(argv[1]);
    std::cout << "Training completed on " << argv[1] << "." << std::endl;

    // Predict sentiment on the provided testing data
    classifier.predict(argv[2], argv[4]);
    std::cout << "Prediction completed on " << argv[2] << ". Results stored in " << argv[4] << "." << std::endl;

    // Evaluate predictions against the provided ground truth data
    classifier.evaluatePredictions(argv[3], argv[5]);
    std::cout << "Evaluation completed. Accuracy report stored in " << argv[5] << "." << std::endl;

    // Run individual tests (optional, for development purposes)
    testDSString();
    testSentimentClassifier();

    return 0;
}
