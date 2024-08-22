#include <iostream>
#include<string>
using namespace std;
int main() 
{
  string str= "Hello";
  //Concatenation 
  string greeting = str+ ",Atharv";
  cout<<"Concatenation:"<<greeting<<endl;
 
  // Substring
  string part = greeting.substr(6, 6); // Extracts "World"
  cout << "Substring: " << part << endl;
  
  // Find
  size_t pos = greeting.find("Atharv");
  cout << "Find: 'Atharv' found at position " << pos << endl;

  // Replace
  string replaced = greeting;
  replaced.replace(pos, 6, "Atharv");
  cout << "Replace: " << replaced << endl;
  
  // Insert
  string inserted = greeting;
  inserted.insert(5, "Beast");
  cout << "Insert: " << inserted << endl;
 
  // Erase
  string erased = greeting;
  erased.erase(5, 7); // Removes " hello"
  cout << "Erase: " << erased << endl;
  
  // To uppercase
  string uppercase = greeting;
  for (char &c : uppercase) c = toupper(c);
  cout << "To Uppercase: " << uppercase << endl;

 // To lowercase
 string lowercase = greeting;
 for (char &c : lowercase) c = tolower(c);
 cout << "To Lowercase: " << lowercase << endl;
    return 0;
}