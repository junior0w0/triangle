#include <iostream>

using namespace std;

int main()
{
 int ts;
 cout << "Isikan tinggi segitiga: ";
 cin >> ts;

 for (int i = 1; i <= ts; i++)
 {
  cout << "=";
 }
 cout << "SEGITIGA 1";
 for (int i = 1; i <= ts; i++)
 {
  cout << "=";
 }
 cout << endl;

 for (int i = 1; i <= ts; i++)
 {
  for (int j = 1; j <= i; j++)
  {
   cout << "*";
  }
  cout << endl;
 }

 for (int i = 1; i <= ts; i++)
 {
  cout << "=";
 }
 cout << "SEGITIGA 2";
 for (int i = 1; i <= ts; i++)
 {
  cout << "=";
 }
 cout << endl;

 for (int i = 1; i <= ts; i++)
 {
  for (int j = i; j <= ts; j++) 
  {
   cout << "*";
  }
  cout << endl;
 }

 for (int i = 1; i <= ts; i++)
 {
  cout << "=";
 }
 cout << "SEGITIGA 3";
 for (int i = 1; i <= ts; i++)
 {
  cout << "=";
 }
 cout << endl;

 for (int i = 1; i <= ts; i++) 
 {
  for (int j = i; j <= ts; j++)
  {
   cout << " ";  
  }
  for (int j = 1; j <= i; j++)
  {
   cout << "*";
  }
  cout << endl; 
 }

 for (int i = 1; i <= ts; i++)
 {
  cout << "=";
 }
 cout << "SEGITIGA 4";
 for (int i = 1; i <= ts; i++)
 {
  cout << "=";
 }
 cout << endl;
 
 for (int i = 1; i <= ts; i++)
  {
   for (int j = 1; j <= i; j++)
   {
    cout << " "; 
   }    
   for (int j = i; j <= ts; j++)
   {
    cout << "*"; 
   }
  cout << endl; 
 }

 for (int i = 1; i <= ts; i++)
 {
  cout << "=";
 }
 cout << "SEGITIGA 5";
 for (int i = 1; i <= ts; i++)
 {
  cout << "=";
 }
 cout << endl;
 
 for (int i = 1; i <= ts; i++)
 {
  for (int j = i; j < ts; j++)
  {
   cout << " ";
  }
  for (int j = 1; j <= 2*i-1; j++)
  {
   cout << "*";
  }
  cout << endl;
 }

 for (int i = 1; i <= ts; i++)
 {
  cout << "=";
 }
 cout << "SEGITIGA 6";
 for (int i = 1; i <= ts; i++)
 {
  cout << "=";
 }
 cout << endl;
 
 for (int i = 1; i <= ts; i++)
 {
  for (int j = 1; j < i; j++)
  {
   cout << " ";
  }
  for (int j = i; j <= ts*2-i; j++)
  {
   cout << "*";
  }
  cout << endl;
 }
 
 for (int i = 1; i <= ts; i++)
 {
  cout << "=";
 }
 cout << "SEGITIGA 7";
 for (int i = 1; i <= ts; i++)
 {
  cout << "=";
 }
 cout << endl;
 
 for (int i = 1; i <= ts; i++)
 {
  for (int j = 1; j <= i; j++)
  {
   cout << "*";
  }
  cout << endl;
  }
 
 for (int i = 1; i < ts; i++) 
 {
  for (int j = i; j < ts; j++)
   {
    cout << "*";
   }
  cout << endl;
 }

 for (int i = 1; i <= ts; i++)
 {
  cout << "=";
 }
 cout << "SEGITIGA 8";
 for (int i = 1; i <= ts; i++)
 {
  cout << "=";
 }
 cout << endl;
 
 for (int i = 1; i <= ts; i++)
 {
  for (int j = i; j <= ts; j++)
  {
   cout << " ";
  }
  for (int j = 1; j <= i; j++)
  {
   cout << "*";
  }
  cout << endl;
 }
 
 for (int i = 1; i < ts; i++)
 {
  for (int j = 0; j <= i; j++)
  {
   cout << " ";
  }
  for (int j = i; j < ts; j++)
  {
   cout << "*";
  }
  cout << endl;
 }

 for (int i = 1; i <= ts; i++)
 {
  cout << "=";
 }
 cout << "BELAH KETUPAT";
  for (int i = 1; i <= ts; i++)
 {
  cout << "=";
 }
 cout << endl;
 
 for (int i = 1; i < ts; i++)
 {
  for (int j = i; j < ts; j++)
  {
   cout << " ";
  }
  for (int j = 1; j <= 2*i-1; j++)
  {
   cout << "*";
  }
  cout << endl;
 }
 
 for (int i = 1; i <= ts; i++)
 {
  for (int j = 1; j < i; j++)
  {
   cout << " ";
  }
  for (int j = i; j <= ts*2-i; j++)
  {
   cout << "*";
  }
  cout << endl;
 }
}