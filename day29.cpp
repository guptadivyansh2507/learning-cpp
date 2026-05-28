
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class StudentSystem{
private:
  vector<vector<int>> marks;
public:
  void Input(){
    int students;
    int subjects;
    cout << "Enter students and subjects: " << endl;
    cin >> students >> subjects;
    marks.resize(students, vector<int>(subjects));
    for(int i = 0; i < students; i++){
      for(int j = 0; j < subjects; j++){
        cin >> marks[i][j];
      }
    }
  }
  void Print(){
    cout << endl;
    cout << "marks matrix: " << endl;
    for(int i = 0; i < marks.size(); i++){
      for(int j = 0; j < marks[i].size();j++){
        cout << marks[i][j] << " ";
      }
      cout << endl;
    }
  }
  void Topper(){
    int bestStudent = 0;
    int bestMarks = 0;
    for(int i = 0; i < marks.size(); i++){
      int sum = 0;
      for(int j = 0; j < marks[i].size(); j++){
        sum += marks[i][j];
      }
      if(sum > bestMarks){
        bestMarks = sum;
        bestStudent = i;
      }
    }
    cout << endl;
    cout << "Topper Student Index: " << bestStudent << endl;
    cout << "Total Marks: " << bestMarks << endl;
  }
  void Averages(){
    cout << endl;
    for(int i = 0; i < marks.size(); i++){
      int sum = 0;
      for(int j = 0; j < marks[i].size(); j++){
        sum += marks[i][j];
      }
      double avg = (double)sum / marks[i].size();
      cout << "Average of Student " << i << " = " << avg << endl;
    }
  }
  void Transpose(){
    int rows = marks.size();
    int cols = marks[0].size();
    vector<vector<int>> trans(cols, vector<int>(rows));
    for(int i = 0; i < rows; i++){
      for(int j = 0; j < cols; j++){
        trans[j][i] = marks[i][j];
      }
    }
    cout << endl;
    cout << " Transpose: " << endl;
    for(int i = 0; i < trans.size(); i++){
      for(int j = 0; j < trans[i].size(); j++){
        cout << trans[i][j] << " ";
      }
      cout << endl;
    }
  }
  void SwapStudents(int a, int b){
    swap (marks[a], marks[b]);
  }
};
int main(){
  StudentSystem s;
  s.Input();
  s.Print();
  s.Topper();
  s.Averages();
  s.Transpose();
  s.SwapStudents(0 , 1);
  cout << endl;
  cout << "After Swapping: " << endl;
  s.Print();
}
