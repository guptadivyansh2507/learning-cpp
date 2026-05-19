
#include <iostream>
#include <string>
using namespace std;
class Player{
private:
  int health;
public:
  Player(int health){
    this->health = health;
  }
  void PrintAddress(){
    cout << "Object Address: " << this << endl;
  }
  void PrintHealth(){
    cout << "Health: " << this->health << endl;
   }
  void Damage(int amount){
    this -> health -= amount;
  }
};
int main(){
  Player p1(100);
  Player p2(50);
  p1.PrintAddress();
  p2.PrintAddress();
  p1.PrintHealth();
  p2.PrintHealth();
  p1.Damage(20);
  p1.PrintHealth();
  p2.PrintHealth();
}
