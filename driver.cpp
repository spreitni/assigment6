#include "Card.hpp"
#include "URL.hpp"
#include <iostream>
#include <string.h>

using namespace std;

string JSONSTRING(string jsonString)
{int count = 0;
    for (int i=0;i<jsonString.length();i++)
    {
        
        if(jsonString[i] ==  '[' )
         {          
             if(count==0)
             {
                jsonString[i] =' ';
                count++;
                cout<<jsonString.at(i);
             }

         }
        if(jsonString[i]==']')
        {
            
            if (count==0)
            {
                jsonString[i] =' ';
            }
            else
            {
                count--;
                
            }
        }
    }
    
    return jsonString;
    
}
int main(int argc, char** argv)
{
    //URL* u1 = new URL("https://api.hearthstonejson.com/v1/25770/enUS/cards.json");
    //cout << u1->getContents() << endl;
    //cout << u1->getContents().length() << endl;
    string jsonString = "[{\"fname\":\"val1\", \"lname\": \"val2\", \"sums\":[1,2,3]},{\"fname\":\"val3\", \"lname\":\"val4\"}]";
    //cout << jsonString << endl;

    cout<<JSONSTRING(jsonString); 
    
    return 0;
}

