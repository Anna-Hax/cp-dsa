#include <iostream>
#include <stdlib.h>

using namespace std;


int convert(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}

long long getbin(int a1);
{
    int a2, remainder;
    int tab = 0;
    int maxtab = 0;
    int table[0];

    a2 = a1; //we need our number for later on so we save it in another variable

    while (a1!=0) //dividing by two until we hit 0
    {
        remainder = a1%2; //getting a remainder - decimal number(1 or 0)
        a1 = a1/2; //dividing our number by two
        maxtab++; //+1 to max elements of the table
    }

    maxtab--; //-1 to max elements of the table (when dividing finishes it adds 1 additional elemnt that we don't want and it's equal to 0)
    a1 = a2; //we must do calculations one more time so we're gatting back our original number
    table[0] = table[maxtab]; //we set the number of elements in our table to maxtab (we don't get 10's of 0's)

    while (a1!=0) //same calculations 2nd time but adding every 1 or 0 (remainder) to separate element in table
    {
        remainder = a1%2; //getting a remainder
        a1 = a1/2; //dividing by 2
        table[tab] = remainder; //adding 0 or 1 to an element
        tab++; //tab (element count) increases by 1 so next remainder is saved in another element
    }

    tab--; //same as with maxtab--
    

    //while (tab>=0) //until we get to the 0 (1st) element of the table
    //{
    //    cout << table[tab] << " "; //write the value of an element (0 or 1)
    //    tab--; //decreasing by 1 so we show 0's and 1's FROM THE BACK (correct way)
    //}

    
    return table[tab];
}

string check(int n){
    long long bin_n;
    bin_n = getbin(n);

    int new_n;
    new_n = convert(bin_n);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << check(n) << endl;
    }

    return 0;
}