//
//  main.cpp
//  Simple Interest 2.0
//
//  Created by Aryan Dinakaran on 20/01/20.
//  Copyright © 2020 Aryan Dinakaran. All rights reserved.
//

#include <iostream>

using namespace std;

void si()
{
    double p,r,t;
    
    cout<<"\n==== ====== ========";
    cout<<"\nFind Simple Interest";
    cout<<"\n==== ====== ========\n";
    
    cout<<"\nEnter Principal\n>> ";
    cin>>p;
    
    cout<<"\nEnter Rate\n>> ";
    cin>>r;
    
    cout<<"\nEnter Time\n>> ";
    cin>>t;
    
    cout<<"\nSimple Interest: "<<((p*r*t)/100)<<endl<<endl;
}

void p()
{
    double si,r,t;
    
    cout<<"\n==== =========";
    cout<<"\nFind Principal";
    cout<<"\n==== =========\n";
    
    cout<<"\nEnter Simple Interest\n>> ";
    cin>>si;
    
    cout<<"\nEnter Rate\n>> ";
    cin>>r;
    
    cout<<"\nEnter Time\n>> ";
    cin>>t;
    
    cout<<"\nPrincipal: "<<((si*100)/r*t)<<endl<<endl;
}

void r()
{
    double si,p,t;
    
    cout<<"\n==== ====";
    cout<<"\nFind Rate";
    cout<<"\n==== ====\n";
    
    cout<<"\nEnter Simple Interest\n>> ";
    cin>>si;
    
    cout<<"\nEnter Principal\n>> ";
    cin>>p;
    
    cout<<"\nEnter Time\n>> ";
    cin>>t;
    
    cout<<"\nPrincipal: "<<((si*100)/p*t)<<endl<<endl;
}

void t()
{
    double si,r,p;
    
    cout<<"\n==== ====";
    cout<<"\nFind Time";
    cout<<"\n==== ====\n";
    
    cout<<"\nEnter Simple Interest\n>> ";
    cin>>si;
    
    cout<<"\nEnter Rate\n>> ";
    cin>>r;
    
    cout<<"\nEnter Principal\n>> ";
    cin>>p;
    
    cout<<"\nPrincipal: "<<((si*100)/r*p)<<endl<<endl;
}

int main()
{
    char condition;
    
    cout<<"What do you want to find \n(Simple Interest: s, Principal: p, Rate: r, Time: t)\n>> ";
    cin>>condition;
    
    switch (condition) {
        case 's':
            si();
            break;
            
        case 'p':
            p();
            break;
            
        case 'r':
            r();
            break;
            
            case 't':
            t();
            break;
            
        default:
            cout<<"Select Between (s,p,r or t)";
            break;
    }
    
}
