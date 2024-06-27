#include <bits/stdc++.h>
using namespace std;

int main()
{
    ofstream outputFile("code.txt");
    ifstream inputFile("input.txt");
    string line;
    string name, num, rarity, qty;
    if (inputFile.is_open())
    {
        int ctr = 1;
        while (getline(inputFile, line))
        {
            if (ctr % 4 == 1)
            {
                outputFile << "<tr>\n";
                name = line;
            }

            if (ctr % 4 == 2)
            {
                num = line;
            }

            if (ctr % 4 == 3)
            {
                qty = line;
            }

            if (ctr % 4 == 0)
            {
                rarity = line;
                string code = "<td>" + num + "</td>\n" + "<td>" + name + "</td>\n" + "<td>" + rarity + "</td>\n" + "<td>" + qty + "</td>\n";
                outputFile << code;
                outputFile << "</tr>\n";
            }

            ctr++;
        }

        inputFile.close();
    }
}