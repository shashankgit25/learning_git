#include <iostream>
#include <cstring>
using namespace std;

bool password(char*pass , int n)
{
    int count = strlen(pass);
    int numco = 0;
    
    for(int i=0; i <= count-1 ; i++)
    {
        if(count < 8)
        {
            return false;
        }
        else {
            if('a'> pass[i] && pass[i] >'z' || 'A'>pass[i] && pass[i]>'Z')
            {
                return false;
            }
         else if('0'<= pass[i] && pass[i] <='9')
         {
             numco++;
              if(numco < 2)
              {
                  return false;
               }
            }
          }
       }
       return true;
   }

int main() {
   int n;
   cin >> n;
   char pass[n];
   cin >> pass;
   password(pass , n);
  cout << password(pass , n) << endl;
   return 0;
}