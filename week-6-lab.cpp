#include<iostream>
using namespace std;

int main()
{
    int score;

    cout << "Enter Score:" << endl;
    cin >> score;
    cout << endl;

    if(score>=86)
    
      cout<< "GRADE = A";

    else if(score>=72)

      cout << "GRADE = B";

    else if(score>=60)

      cout << "GRADE = C";

    else if(score>=50)

      cout << "GRADE = D";

    else 

       cout << "GRADE = F";    
           
    return 0;

}    

