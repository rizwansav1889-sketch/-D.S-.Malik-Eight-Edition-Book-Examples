#include <iostream>
using namespace std;

int main() {
    float score1, score2, score3, score4, score5, average;

    cout << "Enter 5 test scores: ";
    cin >> score1 >> score2 >> score3 >> score4 >> score5;

    average = (score1 + score2 + score3 + score4 + score5) / 5;

    cout << "Average test score = " << average << endl;

}
