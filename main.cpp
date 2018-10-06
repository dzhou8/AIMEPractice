#include <iostream>
#include <vector>
#include <fstream>
#include <windows.h>
#include <time.h>

using namespace std;

vector<int> possibilities;
int main()
{
    srand(time(NULL));
    for(int i = 1983; i <= 2016; i++)
    {
        for(int j = 0; j < i-1982; j++)
        {
            if(i >= 2000)
            {
                possibilities.push_back(i);
            }
            possibilities.push_back(i);
        }
    }
//    for(int i = 0; i < possibilities.size(); i++)
//    {
//        fout << possibilities[i] << endl;
//    }
    int index = rand() % possibilities.size();
    int year = possibilities[index];
    vector<int> problems;
    for(int i = 1; i <= 15; i++)
    {
        for(int j = 0; j < min(abs(i-0), abs(16-i)); j++)
        {
            problems.push_back(i);
        }
    }
    int problem = problems[rand() % problems.size()];
    string url = "";
    if(year < 2000)
    {
        url = "http://artofproblemsolving.com/wiki/index.php/" + to_string(year) + "_AIME_Problems";
    }
    else
    {
        int test = rand() % 2 + 1;
        if(test == 1)
        {
            url += "http://artofproblemsolving.com/wiki/index.php/" + to_string(year) + "_AIME_I" + "_Problems";
        }
        else
        {
            url += "http://artofproblemsolving.com/wiki/index.php/" + to_string(year) + "_AIME_II" + "_Problems";
        }
    }
    url += "#Problem_";
    url += to_string(problem);
    ShellExecute(NULL, "open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
    cout << url.c_str() << endl;
    return 0;
}
