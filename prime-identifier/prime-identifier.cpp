// Example program
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
    ofstream outfile ("nums.txt");
    int i, chk=0, j;
    for(i=1000; i<=9999; i++)
    {
        for(j=2; j<i; j++)
        {
           if(i%j==0)
           {
               chk++;
               break;
           }
        }
        if(chk==0) 
        {
            cout<<i<<endl;
            outfile << i << endl;
            
        }
        chk = 0;
    }   
    outfile.close();
    return 0;
}
