/*
Final Project
Atif Raiyan
May 17, 2023
*/
#include<iostream>
using namespace std;
int choices(){
    char choice = ' ';
    cout<<"\nPlease Choose the Initial Corresponding To Your Membership\n";
    cout<<"\nE ~ ~ ~ Elite\n";
    cout<<"\nL ~ ~ ~ Legacy\n";
    cout<<"\nD ~ ~ ~ Dual\n";
    cout<<"\nI ~ ~ ~ Individual\n";
    cout<<"\nPress Enter '0' if None are Applicable: ";
    cin>>choice;
    switch(choice)
    {
        case 'e':
        case 'E':
            cout<<"\nMembership ~ ~ ~ Elite\n";
        break;

        case 'l':
        case 'L':
            cout<<"\nMembership ~ ~ ~ Legacy\n";
        break;

        case 'd':
        case 'D':
            cout<<"\nMembership ~ ~ ~ Dual\n";
        break;

        case 'i':
        case 'I':
            cout<<"\nMembership ~ ~ ~ Individual\n";
        break;

        default:
            cout<<"\nMembership ~ ~ ~ None\n";
    }
    return choice;
}

void tickets(int ticket[]){
    int a = 0, c = 0;
    cout<<"\n~ ~ ~ ~ ~ ~ ~ ~ Ticket Booth! ~ ~ ~ ~ ~ ~ ~ ~\n\n";
    cout<<"\n> > > Please Enter the amount of Adult Tickets you Require (18+): ";
    cin>>a;
    cout<<"\n> > > Please Enter the amount of Child Tickets you Require (0 - 17): ";
    cin>>c;
    ticket[0] = a;
    ticket[1] = c;
    cout<<"\n> > > Adult Tickets: "<<ticket[0]<<" < < <"<<"\n\n> > > Child Tickets: "<<ticket[1]<<" < < <\n";
}

void pricecalculation(int ticket[], char rank, float price[]){
    int b = 0, d = 0;
    float e = 0, f = 0;
    switch (rank) {
        case 'e':
        case 'E':
            b = 3;
            d = 6;
            e = 9.99;
            f = 5.99;
            break;

        case 'l':
        case 'L':
            b = 2;
            d = 4;
            e = 10.99;
            f = 6.99;
            break;

        case 'd':
        case 'D':
            b = 2;
            d = 2;
            e = 10.99;
            f = 7.99;
            break;

        case 'i':
        case 'I':
            b = 1;
            d = 1;
            e = 11.99;
            f = 8.99;
            break;

        default:
            b = 0;
            d = 0;
            e = 18.99;
            f = 15.99;
    }
    price[0] = (ticket[0] - b) * e;
    if(price[0]<0){
        price[0]=0;
    }
    price[1] = (ticket[1] - d) * f;
    if(price[1]<0){
        price[1]=0;
    }
    price[2] = price[0] + price[1];
    if(price[2]<0){
        price[2]=0;
    }
    
}

int pricereturn(float price[]){
    int decision = 1;
    if(price[2] != 0){
        cout<<"\n\n! ! ! ! ! ! ! ! ! ! Warning Warning Warning ! ! ! ! ! ! ! ! ! !\n";
        cout<<"\n{ { { Due to the contents of your order a Fee will be charged } } }\n";
        cout<<"\n= = = = = = = = = = Amount Due $"<<price[2]<<" = = = = = = = = = =\n";
    }
    else{
        cout<<"\n{ { { The amount you owe is $0 } } }\n";
    }
    cout<<"\n| | | | | Type '0' to finalize or Type '1' to exit | | | | |\n\t\t\t\t";
    cin>>decision;
    if(decision != 0){
        cout<<"\nThank you visiting!\n";
    }
    return decision;
}

void reciept(int ticket[], float price[]){
    cout<<"\nThank you for your order!\n";
    cout<<"\nTickets\t\tAmount\tTotal\n";
    cout<<"\nAdults\t\t"<<ticket[0]<<"\t$"<<price[0]<<"\n";
    cout<<"\nChildren\t"<<ticket[1]<<"\t$"<<price[1]<<"\n";
    cout<<"\nSubtotal\t$"<<price[2]<<endl;
    cout<<"\n\n- - - - - - - - - - - - - - - - - - - -\n\n";
    cout<<"\nExtra\t$"<<price[2]<<endl;
    cout<<"\nTotal\t$"<<price[2]<<endl;
}   

int main(){
    cout<<"\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ Welcome to the Zoo ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n";
    cout<<"\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~  Please Enjoy Your Stay! ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ \n";
   
    cout<<"\n\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n";
    
    cout<<"\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ Membership List ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
    //Elite
    cout<<"\n* * * Elite Membership\n";
    cout<<"\n* * Free Admission Tickets up to 3 Adults and 6 Children \n";
    cout<<"\n* Extra Tickets Cost ~ $9.99 per Adult / $5.99 per Child\n";
    cout<<"\n/ / / / / / / / / / / / / / / / / / / / / / / / / / / / / / /\n";
    //Legacy
    cout<<"\n* * * Legacy Membership\n";
    cout<<"\n* * Free Admission Tickets up to 2 Adults and 4 Children \n";
    cout<<"\n* Extra Tickets Cost ~ $10.99 per Adult / $6.99 per Child\n";
    cout<<"\n/ / / / / / / / / / / / / / / / / / / / / / / / / / / / / / /\n";
    //Dual
    cout<<"\n* * * Dual Membership\n";
    cout<<"\n* * Free Admission Tickets up to 2 Adults and 2 Children \n";
    cout<<"\n* Extra Tickets Cost ~ $10.99 per Adult / $7.99 per Child\n";
    cout<<"\n/ / / / / / / / / / / / / / / / / / / / / / / / / / / / / / /\n";
    //Individual
    cout<<"\n* * * Individual Membership\n";
    cout<<"\n* * Free Admission Tickets up to 1 Adults and 1 Children \n";
    cout<<"\n* Extra Tickets Cost ~ $11.99 per Adult / $8.99 per Child\n";
    cout<<"\n/ / / / / / / / / / / / / / / / / / / / / / / / / / / / / / /\n";
    //None
    cout<<"\n* * * If Not A Member\n";
    cout<<"\n* * No Free Admission Tickets \n";
    cout<<"\n* Ticket Cost ~ $18.99 per Adult / $15.99 per Child\n";
    cout<<"\n\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n";
    //First Function
    char rank = choices();
    cout<<"\n\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n";
    //Second Function
    int ticket[2];
    tickets(ticket);
    cout<<"\n\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n";
    //Third Function
    float price[3];
    pricecalculation(ticket, rank, price);
    //Fourth Function
    int decision = pricereturn(price);
    cout<<"\n\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n";
    //Fifth Function
    if(decision == 0){
    reciept(ticket, price);
    }
    return 0;
}