/*Folder: Little_Sister_YourLastName
CPP: Function_Practice_Little_Sister.cpp
Teacher: Dr. Tyson McMillan, 9-1-2019
Student: TYPE_YOUR_NAME_HERE

Description: Dr_T's little sister is smart.
She uses a divide and concur method to get $20 from the parents.
She asks mom and dad individually. Based upon their responses she can
earn $0, $20, or $40 from them.
Create a dad/mom yes/no (True/false) program to capture the possibilities.
Use functions and pass by value.
Also address the programming challenges in int main() make the appropriate
function prototypes, function definition, and functions calls to make the program work.
This completed work shall be uploaded to Extra Credit item 15: Little_Sister_YourLastName.zip
*/
#include<iostream>
using namespace std;

//$_earned       mom  dad
double MakeBank(bool,bool); //function prototype
void welcomeMessage();
void dayOfTheWeek(int);

int main()
{  
    int dayInput = 0; //accept day input from the user
    welcomeMessage();
    //function calls (true = "yes", false="no"
    cout << "\nLittle Sister Function calls: ";
    cout << "\nOption 1, Little Sister Earns: $" << MakeBank(true,false);
    cout << "\nOption 2, Little Sister Earns: $" << MakeBank(false,true);
    cout << "\nOption 3, Little Sister Earns: $" << MakeBank(true,true);
    cout << "\nOption 4, Little Sister Earns: $" <<  MakeBank(false,false);

    /*Programming Challenges
      1. Extend this program to output how much Little Sister earns in each scenario.
      2. Create a void welcomeMessage(); function to show a nice greeting on screen to the program.
      3. Extend this program to write a void dayOfTheWeek(int); function given user input of the number (1 output Sunday);
      4. Output each day of the week in a different color.
      5. Extend this program create a function double numberCube(double); to output the cube of the number passed.
      6. Extend this program set the precision of the numberCube result to 4 decimal places
      7. Loop the program until exit conditions 'E' AND 'e', clear the screen upon each loop #include<cstdlib> system("cls");
    */
    cout << "Please enter a day of the week (1-7): ";
    cin >> dayInput; //accept input of day
    dayOfTheWeek(dayInput); //pass argument provided by user 
    return 0;
}

double MakeBank(bool mom, bool dad)
{
	double amtEarned = 0.0; //what sister can get from parents
	//handle each scenario How much does Little Sister earn $20 increments.
  if(mom == true)
{
  amtEarned += 20.0;
}
  if(dad == true)
  {
    amtEarned += 20.0;
  }
  if(mom == false)
  {
    amtEarned += 0.0;
    cout << "\n\t ain't!!! " << endl;
  }
  if(dad == false)
  {
    amtEarned += 0.0;
    cout << "\n\t ain't!!! " << endl;
  }
	return amtEarned;
}

void welcomeMessage()
{
  cout << "\nBoom, Pop, Pow!!!!" << endl;
  for(int i = 1 ; i < 25; i++)
  {
    cout << "*";
  }
  cout << endl;
}

void dayOfTheWeek(int day)
{
  
  if(day == 1)
  {
    cout << "\x1b[34;1mIt's Tuesday!!!!\x1b[0m\n";
  }
  else if (day == 2)
  {
    cout << "\x1b[33;1mIt's Monday!!!!\x1b[0m\n";
  }
  //solve for days 3-7 AND deafult clause invalid
  else if (day == 3)
  {
    cout << "\x1b[34;1mIt's Tuesday!!!!\x1b[0m\n";
  }
  else if (day == 4)
  {
    cout << "\x1b[35;1mIt's Wednesday!!!!\x1b[0m\n";
  }
  else if (day == 5)
  {
    cout << "\x1b[36;1mIt's Thursday!!!!\x1b[0m\n";
  }
  else if (day == 6)
  {
    
    cout << "\x1b[45;1mIt's Friday!!!!\x1b[0m\n";
  }
  else if (day == 7)
  {
    cout << "\x1b[41;1mIt's Saturday!!!!\x1b[0m\n";
  }

}