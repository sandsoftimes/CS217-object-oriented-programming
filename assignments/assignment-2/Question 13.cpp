#include <iostream>
#include<string>


using namespace std;


double getAvg(int number, int score[][5])
{
    double sum_score = 0;
    for (int i = 0; i < 5; i++)
    {
        sum_score += score[number][i];
    }
    return sum_score / 5;
}


void setGlade(int number ,int score [][5],string *glade) 
{
    double avg_score;
    avg_score = getAvg(number, score);
    if (avg_score >= 90 && avg_score <= 100) 
    {
        glade[number] = "A";
    }
    else if (avg_score >= 80 && avg_score <= 89) 
    {
        glade[number] = "B";


    }
    else if (avg_score >= 70 && avg_score <= 79)
    {
        glade[number] = "C";


    }
    else if (avg_score >= 60 && avg_score <= 69)
    {
        glade[number] = "D";


    }
    else if (avg_score  < 60)
    {
        glade[number] = "F";


    }
}
string getGlade(int number, int score[][5], string* glade)
{
  setGlade( number,  score, glade);
  return glade[number];
}
void setScore(int number, int score[][5])
{
    for (int i = 0; i < 5; i++)
    {
        cin >> score[number][i];
    }
}
void setName(int number, string* name) 
{
    cin>> name[number];
}
string getName(int number, string* name)
{
    return name[number];
}
void Display(int number, int score[][5], string* glade,string *name) 
{
    cout << "Name:" << getName(number, name)<<endl;
    cout << "Test score: ";
    for (int i = 0; i < 5; i++) 
    {
        cout << score[number][i] << " ";
    }
    cout << endl;
    cout << "Glade " << getGlade(number, score, glade) << endl;
    cout << "Avg score " << getAvg(number, score);
}




int main()
{
    
    string names[10];
    int test_score[10][5];
    string test_glade[10];
    // enter all student example
    for (int i = 0; i < 10; i++) 
    {
        cout << "Enter name " << i + 1 << " student: ";
        setName(i, names);
        cout << "Enter test score: ";
        setScore(i, test_score);
        
    }
    // view all student info 
    for (int i = 0; i < 10; i++)
    {
        Display(i, test_score, test_glade, names);
    }
    //  output the class average
    float all_avg=0;
    for (int i = 0; i < 10; i++) 
    {
        all_avg += getAvg(i, test_score);
    }
    all_avg /= 10;
    cout <<"The class average." << all_avg << endl;
    return 0;
}
