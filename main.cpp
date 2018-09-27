#include <iostream>
#include <string>

using namespace std;

/*  NOtes
 *  This program will only work for values less then 4000 and greater then zero 
 *
 *  I = 1
 *  V = 5
 *  X = 10
 *  L = 50
 *  C = 100
 *  D = 500
 *  M = 1000
 *
 *  Side Note Dont need a forloop for 500,50,5 Because the remainder will always be 
 *  Smaller 
 *  But for 1 10 100 1000 I do because Remainder can be bigger so need to test 
 */


int main()
{

    
    string holder; //This string will hold the Letters Representing the roman numerals 
    
    int input = 0; //Will hold the value entered by the user 
    int  part = 0; //This will hold the number left when we divided the input value

    
    cout << "Please Enter a integer and I will give you its Roman Numeral (Between 0 and 3999)\n\n";
    cin >> input;

    
    if(input <=0 || input >= 4000){

    cout << "Please Enter Valid Data" << endl;
    }
       
    //Now that Im dealing with Valid Data Im going to test the input for its roman numerals 
    else{
        if(input >=1000){
      part = input/1000; 
   
      for(int i = 0; i < part; i++)
         {
      holder+= "M";
         }
      //This will give us the remaining numbers to test 
      input %= 1000; //This will Update our input   
        }
        //We have to test 900 Because DCCCC Does not work so it needs a specfic answer
        if(input >= 900){
        input %= 900; //We are updating our input value
        holder += "CM";
        }
        else if (input >=500){
        input %= 500; //Updating input 
        holder+= "D";
        }
        //Need a specific test for 400 because CCCC Does not make sense 
        if(input >= 400)
        {
        input%=400;
        holder += "CD"; 
        }
        else if(input >= 100)
        {
            part = input/100;//We need to know how many 100 are left 
            
            for(int i = 0; i< part;i++)
            { 
            holder+= "C";
            }
            input %=100;//Updating our input 
        }
        if(input >=90)
        {
            input%=90;
            holder+="XC";
        }
        else if (input >= 50)
        {
            input%=50;
            holder+="L";
        }
        if(input >=40)
        {
            input %=40;
            holder += "XL";
        }
        else if(input >= 10)
        {
            part = input/10 ;//Need to know how many 10s needed
            for(int i = 0; i < part;i++){
            holder +="X";
            }
            input%=10; //Updating value 
        }
        if(input >= 9)
        {
            input %=9;//Will give me zero Therfore program done
            holder +="IX";
        }
        else if(input >= 5){
            input %=5;
            holder +="V";
        }
        if(input >= 4){
        input %=4;
        holder +="IV";
        }
        else if(input >=1){
            for (int i =0; i < input;i++){
            holder +="I";
            }
        }
    }  

 
    cout << "Your Roman Numerical Representation is: " << holder << endl;

    return 0; 
}

