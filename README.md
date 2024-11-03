# CS_5393-002_Project3

Explanation of the Sentiment Analysis Project:

This project is a C++ application designed to perform sentiment analysis on a given dataset of tweets. Sentiment analysis is a method of determining whether a piece of text expresses positive, negative, or neutral sentiment. In this project, we build a sentiment classifier that can analyze tweets from a training dataset, learn the patterns associated with positive and negative sentiments, and then use that knowledge to predict the sentiment of unseen tweets in a testing dataset. 

The main components of this project  include the DSString class, which provides custom string handling with dynamic memory management, and the SentimentClassifier class, which implements the training and prediction logic for the sentiment analysis. The DSString class is designed with overloaded operators and functions to mimic standard string operations, ensuring efficient handling of string data within the project. The SentimentClassifier class uses data structures such as maps to store word frequencies from the training dataset and employs simple algorithms to predict sentiment based on the frequency of words in positive and negative tweets. 

The program accepts command-line arguments for file paths to the training data, testing data, and ground truth sentiment data, and outputs results to specified files. The main workflow of the project includes reading and processing the training data to build a model, predicting sentiment for the testing dataset, and evaluating the model's performance by comparing predictions to the ground truth data.

This project is organized with separate header (.h) and implementation (.cpp) files for the DSString and SentimentClassifier classes, as well as main.cpp file that serves as the entry point for the program. The codebase is structured for clarity, maintainability, and ease of testing. A .gitignore file is included in the project to ensure that unnecessary files are not tracked in the reporsitory.




