#include <iostream>
#include <vector>
#include "check_sortic.h"
#include <string>
#include <fstream>
#include <windows.h>
using namespace std;

int main()
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    vector <int> a1;
    ifstream file;
    file.open("aboba.txt");
    string str, res;
    int k;
    vector <int> a;
    vector <int> b;
    string znak;
    cin >> znak;
    while(znak != "!"){
        a.push_back(cifrovizacia(znak));
        cin >> znak;
    }
    while(str != "*")
        {
            cin >> str;
            /*file >> str;
            if (str != "*")
                cout << str << endl;*/
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
        if (a.size() == 0){
            SetConsoleTextAttribute(hConsole, 12);
            cout << "KO";
        }
        else
        {
            if (a1.size() == 0 && a.size() != 0)
            for(int l = 0; l < a.size(); l++)
                a1.push_back(a[l]);
    if(rab(a1))
        res = "OK";
    else
        res = "KO";
    if (res == "OK")
        SetConsoleTextAttribute(hConsole, 10);
    else
        SetConsoleTextAttribute(hConsole, 12);
    cout << res << endl;
        }
        SetConsoleTextAttribute(hConsole, 15);
    /*for (int i = 0; i < a1.size(); i++)
        cout << a1[i] << " ";*/
        return 0;
}
