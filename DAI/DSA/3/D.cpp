#include <iostream>
#include <set>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int numTickets, numCustomers;
    if (!(cin >> numTickets >> numCustomers)) {
        return 0;
    }

   
    multiset<int> availableTickets;
    
   
    for (int i = 0; i < numTickets; ++i) {
        int ticketPrice;
        cin >> ticketPrice;
        availableTickets.insert(ticketPrice);
    }

  
    for (int i = 0; i < numCustomers; ++i) {
        int maxPriceWillingToPay;
        cin >> maxPriceWillingToPay;

       
        auto bestTicketIt = availableTickets.upper_bound(maxPriceWillingToPay);

       
        if (bestTicketIt == availableTickets.begin()) {
            cout << -1 << "\n";
        } else {
           
            --bestTicketIt;
            
            cout << *bestTicketIt << "\n";
            
          
            availableTickets.erase(bestTicketIt);
        }
    }

    return 0;
}