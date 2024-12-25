
/*
 1. get the start and ending value from the user
 2. display the heading multiplication table from 1 to 12
 3. make a nested for loop and set i to the start value and limit it to the end value inputed by the user
 4. then muntiply i by j to get the value of that number multiplied by a number from 1 to 12
 5.loop over this until the end value
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //set necessary variables
    int startValue, endValue;
    startValue = 0;
    endValue = 0;
    
    //get user input for the desired start and end value
    cout << "Enter the start value: ";
    cin >> startValue;
    cout << "Enter the end value: ";
    cin >> endValue;
    cout  << "\n               Multiplication Table \n\n"  ;

    // Display the number title
    //cout  << "    |   ";
    cout << setw(5) << "|";
    for (int i = 1; i <= 12; i++)
    {
        cout << setw(4) << i;
        
        for(int j = startValue; j <=endValue; j++){
            
        }

    }
    cout << endl;
    cout  << "--------------------------------------------------------\n";

    
    
    // Display the table body using nested loops
    for(int i = startValue; i <=endValue; i++){
        //this displays the value with styling
        cout << setw(4)<< i << "|";
        for(int j = 1; j<=12; j++){
            //this loops through the value of i and multiplies it by j until 12
            cout << setw(4)<< i * j;
        }
        cout<<endl;
    }

}
/*
 Enter the start value: 19
 Enter the end value: 23

                Multiplication Table

     |   1   2   3   4   5   6   7   8   9  10  11  12
 --------------------------------------------------------
   19|  19  38  57  76  95 114 133 152 171 190 209 228
   20|  20  40  60  80 100 120 140 160 180 200 220 240
   21|  21  42  63  84 105 126 147 168 189 210 231 252
   22|  22  44  66  88 110 132 154 176 198 220 242 264
   23|  23  46  69  92 115 138 161 184 207 230 253 276
 */
