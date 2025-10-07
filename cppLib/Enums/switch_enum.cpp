#include <iostream>

using namespace std;

enum class CharacterClass {
  WARRIOR,
  MAGE,
  ROGUE
};

void performAction(CharacterClass character) {
  switch(character) {
    case CharacterClass::WARRIOR:
      cout << "The Warrior swings their sword!" << endl;
      break;
    case CharacterClass::MAGE:
      cout << "The Mage casts a fireball!" << endl;
      break;
    case CharacterClass::ROGUE:
      cout << "The Rogue stealthily betrays!" << endl;
      break;
    default:
      cout << "Unknown character!" << endl;
  }
}

int main() {
  CharacterClass myCharacter = CharacterClass::MAGE;
  performAction(myCharacter);
  return 0;
}