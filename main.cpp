#include <iostream>
#include <vector>
#include "check_sortic.h"
#include <string>
#include <fstream>
using namespace std;

int main()
{
    vector <int> a1;
    ifstream file;
    file.open("aboba.txt");
    string str;
    int k, i;
    vector <int> a;
    vector <int> b;
    string znak;
    cin >> znak;
    while(znak != "!"){
        a.push_back(cifrovizacia(znak));
        cin >> znak;
    }
    while(str != "con")
        {
            file >> str;
            if (str != "con")
                cout << str << endl;
            if (str == "sa")
                s(a);
            if (str == "sb")
                s(b);
            if (str == "ss"){
                s(a);
                s(b);
            }

            if(str == "pa")
                p(a1,b);
            if(str =="pb")
                p(b,a);
            if(str == "ra")
                r(a);
            if(str == "rb")
                r(b);
            if(str == "rr"){
                r(a);
                r(b);
            }
           if(str == "rra")
                rr(a);
            if(str == "rrb")
                rr(b);
            if(str == "rrr"){
                rr(a);
                rr(b);
            }

        }
    if(rab(a1))
        cout << "OK" << endl;
    else
        cout << "KO" << endl;

    for (i = 0; i < a1.size(); i++)
        cout << a1[i] << " ";
}
