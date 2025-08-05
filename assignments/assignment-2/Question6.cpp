#include "stdio.h"
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;
int stux;
char stuGrade;
int correctAnswers(char[], char[]);
char studentGrade(int score);
char ansKey[10];
char stuA[10];
int main()
{
    ifstream inFile;
    ofstream outFile;
    inFile.open("TFInput.txt");
    outFile.open("TFOutput.txt");
    double score;
    char grade;
    string key;
    string studentID;
    string stuAnswers;
    getline(inFile, key);
    outFile << "The correct answers are " << key << endl << endl;
    while (getline(inFile, studentID, ' '))
    {
        outFile << studentID << " ";
        getline(inFile, stuAnswers);
        stux = studentGrade(stux);
        outFile << " " << stuAnswers << endl;
    }
    return 0;
}
int correctAnswers(char answerKey[], char studentAnswers[])
{
    int i;
    int tempscore;
    for (i = 0; i < 22; i++)
    {
        if (answerKey[i] == studentAnswers[i])
        {
            tempscore += 2;
        }
        else if (studentAnswers[i] == ' ')
        {
            tempscore += 0;
        }
        else
        {
            tempscore -= 1;
        }
    }
    cout << tempscore << endl;
    return tempscore;
}
char studentGrade(int x)
{
    int i;
    double score = 0;
    char grade = ' ';
    score = x / 40.0 * 100;
    for (i = 0; i < 30; i++)
    {
        if (score >= 90)
            grade = 'A';
        else if (score < 90 && score > 79)
            grade = 'B';
        else if (score <= 79 && score > 69)
            grade = 'C';
        else if (score <= 69 && score > 60)
            grade = 'D';
        else if (score <= 59)
            grade = 'F';
    }
    return grade;
}
