//José Reynaldo Almanza Magallanes
//Find the Unique Character
//Given a string that contains several characters in duplicate and continuous,
//except one character, find the unique character within the string.

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string sTR;
    cin >> sTR;
    int iMax = sTR.length() -1;
    int iMin = 0,  iMedium;
    //Binary Search using while
    while(iMin <= iMax){
        iMedium = (iMin+iMax)/2;
        //If char in iMedium is different than the char that is that to it's left and to it's right then that's the unique character
        if(sTR[iMedium] != sTR[iMedium+1] && sTR[iMedium] != sTR[iMedium-1]){
            cout << sTR[iMedium] << endl;
            return 0;
        }
        else{
            if(sTR[iMedium] == sTR[iMedium+1]){
                if((iMedium-1)%2 == 0){
                    iMax = iMedium-1;
                }
                else{
                    iMin = iMedium+2;
                }
            }
            else if(sTR[iMedium] == sTR[iMedium-1]){
                if((iMedium+1)%2 == 0){
                    iMin = iMedium+1;
                }
                else{
                    iMax = iMedium-2;
                }
            }
        }
    }
}
    
    

