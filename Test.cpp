// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

 #include <iostream>
 #include <stdlib.h>
 #include<ctime>
#include <cstdlib>
#include <fstream>
#include<string>
#include<cstring>
#include <chrono>
#include <vector> 
#pragma warning(disable : 4996)
void printHello(void);
void printPersonalInfo(void);
void changeColorOfText(void);
void printCurrentDate(void);
void printLargValue(void);
void randomNumberGuessGame(void);
void writeOnDisk(void);
void readDataFromDisk(void);
void raised_to_10_And_raised_To_2(int);
void printTableFromOneToTen(void);
void copyInSortedArrayFromRandomData(void);
void isPalidrom(void);
void printRangeBetween(void);
void printEvenOdd(void);
void sumOfRange(void);
void personHEalth(void);

static const char alphanum[] = "g" "bad" ;
using namespace std;
class Information
{
private:
    
    char sname[20];
    char health;
    char luck;
    char strength;
    
public:
    

    int stringLength = sizeof(alphanum) - 1;
    char genRandom()  // Random string generator function.
    {

        return alphanum[rand() % stringLength];
    }
    void Takedata()
    {
        std::cout << "Enter Name ";         
        std::cin>>sname;
        health = genRandom();
        luck = genRandom();
        strength = genRandom();
              
    }
    void Showdata()
    {
        cout << endl << "name   = " << sname << "\thealth  = " << health << "\tluck   = "
            << luck << "\tStrength   = " << strength << endl;
    }
};

using namespace std;
int main()
{
    int choice;
    
    do {
        system("CLS");
        cout << "\nEnter 1 to print Task 1\n";
        cout << "Enter 2 to print Task 2\n";
        cout << "Enter 3 to print Task 3\n";
        cout << "Enter 4 to print Task 4\n";
        cout << "Enter 5 to print Task 5\n";
        cout << "Enter 6 to print Task 6\n";
        cout << "Enter 7 to print Task 7\n";
        cout << "Enter 8 to print Task 8\n";
        cout << "Enter 9 to print Task 9\n";
        cout << "Enter 10 to print Task 10\n";
        cout << "Enter 11 to print Task 11\n";
        cout << "Enter 12 to print Task 12\n";
        cout << "Enter 13 to print Task 13\n";
        cout << "Enter 14 to print Task 14\n";
        cout << "Enter 15 to print Task 15\n";
        cout << "Enter 16 to print Task 16\n";
        cout<< "Enter 0 to exit the program\n";

        cin >> choice;
        switch (choice)
        {
        case 1:
            printHello();
            break;
        case 2:
            printPersonalInfo();
            break;
        case 3:
            
            changeColorOfText();
            break;
        case 4:
            printCurrentDate();
            break;
        case 5:
            printLargValue();
            break;
        case 6:
            randomNumberGuessGame();
            break;
        case 7:
            writeOnDisk();
            break;
        case 8:
            readDataFromDisk();
            break;
        case 9:
            int number;
            cout << "Enter number whose square root you want to calculate \n";
            cin >> number;
            raised_to_10_And_raised_To_2(number);
            break;
        case 10:
            printTableFromOneToTen();
            break;
        case 11:
            copyInSortedArrayFromRandomData();
            break;
        case 12:
            isPalidrom();
            break;
        case 13:
            printRangeBetween();
            break;
        case 14:
            printEvenOdd();
            break;
        case 15:
            sumOfRange();
            break;
        case 16:
            personHEalth();
            break;
        case 0:
            exit(0);

        }
        system("pause");
    } while (1);
    system("pause");
}


void printHello(void)
{
    cout << "Hello World\n";

}

void printPersonalInfo(void)
{
    int age;
    string FirstName;
    string LasttName;
    cout << "\n Enter first name    ";
    cin >> FirstName;
    cout << "\n Enter last name    ";
    cin >> LasttName;
    cout << "\n Enter your age    ";
    cin >> age;
    cout << "\n" << "Name : " << FirstName << "   " << LasttName << "    Age :   " << age<<endl;


}

void changeColorOfText(void)
{
    cout << "\nDo you want change the color of text ....\n if yes then please enter t else press b" << endl;
    char c;
    cin >> c;
    if (c == 't')
    {
        system("color 1");
    }
    if(c=='b') 
    {
        system("color A1");
    }
}

void printCurrentDate(void)
{
   // std::time_t now_time = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
   // std::cout << "Now:" << std::ctime(&now_time);
    time_t timetoday;
    time(&timetoday);
    cout << "Calendar date and time as per todays is : " << asctime(localtime(&timetoday));

}
void printLargValue(void)
{
    int number1, number2;
    cout << "Enter Fisrt number \n";
    cin >> number1;
    cout << "Enter Second number \n";
    cin >> number2;
    if (number1 > number2)
        cout << "\nLarge number is = " << number1 << " : ";
    if(number2> number1)
        cout << "\nLarge number is = " << number2 << " : ";
}

void randomNumberGuessGame(void)
{
    int num, guess, tries = 0;
    srand(time(0)); 
    num = rand() % 100 + 1; 
    cout << "\nGuess Number\n\n";

    do
    {
        cout << "Enter a guess between 1 and 100 : ";
        cin >> guess;
        tries++;

        if (guess > num)
            cout << "Too high!\n\n";
        else if (guess < num)
            cout << "Too low!\n\n";
        else
            cout << "\nCorrect! You got it in " << tries << " guesses!\n";
    } while (guess != num);

}

void writeOnDisk(void)
{
    ofstream myfile;
    myfile.open("example.txt");
    std::string Line;
    cout << "\n Enter a line which you want to store in the test file \n";

    std::getline(std::cin,Line);
    myfile << Line<<"\n";
    myfile.close();
}

void readDataFromDisk(void)
{
    string line;
    ifstream myfile("example.txt");
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            cout << line << '\n';
        }
        myfile.close();
    }

    else cout << "Unable to open file";

}

void raised_to_10_And_raised_To_2(int num)
{
   
    int result;
    result = pow(num, 0.5);
    cout << "Square root of given number is " << result << endl;
    int TwopowOfSquRoot=pow(result,2);
    int TenpowOfSquRoot = pow(result, 10);
    cout << "Two power of Square root of given number is " << TwopowOfSquRoot << endl;
    cout << "Ten power Square root of given number is " << TenpowOfSquRoot << endl;


}

void printTableFromOneToTen(void)
{
    int n;

    cout << "\n Enter a positive integer of which you want to print a table: ";
    cin >> n;
    cout << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << n << "\t *\t " << i << "   =   " << n * i << endl;
    }

}

void copyInSortedArrayFromRandomData(void)
{
    int arrayUnsorted[10];
    int arraySorted[10];
    srand(time(0));
    int num;
    int i;
    for ( i = 0; i < 10; i++)
    {
        num = rand() % 100 + 1;
        arrayUnsorted[i] = num;
    }
    int j;
    int temp;
    for (i = 0; i < 10; i++)
    {
        arraySorted[i] = arrayUnsorted[i];
    }
    
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (arraySorted[i] > arraySorted[j])
            {
                temp = arraySorted[i];
                arraySorted[i] = arraySorted[j];
                arraySorted[j] = temp;
            }
        }
    }

    //print sorted array elements
    cout << "Sorted (Ascending Order) \t  Unsorted Element" << endl;
    for (i = 0; i < 10; i++)
    {
        cout << arraySorted[i] << "\t\t\t\t\t" << arrayUnsorted[i] << endl;
    }
    


}

void isPalidrom(void)
{
  cout << "\nEnter 1 if you want to check number palindrom" << endl << "\nEnter 2 if you want to check string palindrom" << endl;
  int choice;
  cin >> choice;
  if (choice == 1)
  {
      int n, num, digit, rev = 0;

      cout << "Enter a positive number: ";
      cin >> num;

      n = num;

      do
      {
          digit = num % 10;
          rev = (rev * 10) + digit;
          num = num / 10;
      } while (num != 0);

      if (n == rev)
          cout << " The number is a palindrome.";
      else
          cout << " The number is not a palindrome.";

  }
  if (choice == 2)
  {
      char string1[20];
      int i, length;
      int flag = 0;

      cout << "Enter a string: "; cin >> string1;

      length = strlen(string1);

      for (i = 0; i < length; i++) {
          if (string1[i] != string1[length - i - 1]) {
              flag = 1;
              break;
          }
      }

      if (flag) {
          cout << string1 << " is not a palindrome" << endl;
      }
      else {
          cout << string1 << " is a palindrome" << endl;
      }
     
  }
}

void printRangeBetween(void)
{
    int startOfRange;
    int endOfRange;
    cout << "\nEnter start Range and end range " << endl;
    cin >> startOfRange;
    cin >> endOfRange;
    int i;
    int num;
    if (startOfRange < endOfRange)
    {
     num= startOfRange;

     for(i=startOfRange;i<=endOfRange;i++)
     {
         cout << num << "  ";
         num++;
     }
     cout << endl;

    }

    if (startOfRange > endOfRange)
    {
        num = startOfRange;

        for (i = startOfRange; i >= endOfRange; i--)
        {
            cout << num << "  ";
            num--;
        }
        cout << endl;

    }
}

void printEvenOdd(void)
{
    vector<int> result;
    string s;
    cin >> s;
    int i = 0, j, n = s.length();
    do
    {
        j = s.find(',', i);
        if (j == string::npos)   j = n;
        result.push_back(stoi(s.substr(i, j)));
        i = j + 1;

    } while (j != n);
    for ( i = 0; i < result.size(); i++)
    {
        if (result[i] % 2 == 0)
        {
            cout << "Even numbers are = ";
            cout << result[i] << " ";
        }
        cout << endl;
    }
    for ( i = 0; i < result.size(); i++)
    {
        if (result[i] % 2 == 1)
        {
            cout << "Odd numbers are = ";
            cout << result[i] << " ";
        }
        cout << endl;
    }
}

void sumOfRange(void)
{
    vector<int> input;
    string s;
    cin >> s;
    int i = 0, j, n = s.length();
    do
    {
        j = s.find(',', i);
        if (j == string::npos)   j = n;
        input.push_back(stoi(s.substr(i, j)));
        i = j + 1;

    } while (j != n);
    int sum = 0;
    for (i = 0; i < input.size(); i++)
    {
        sum += input[i];
        cout << input[i] << "  ";
    }

    cout << "\nSum of numbers = " << sum << endl;
}

void personHEalth(void)
{
    Information self;
    Information Oppo;
    self.Takedata();
    Oppo.Takedata();
    Oppo.Showdata();
    self.Showdata();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
