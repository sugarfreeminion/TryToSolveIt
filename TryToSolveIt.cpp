#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    ifstream inputFile;

    inputFile.open(argv[1]);

    if(inputFile.is_open())
    {
        string line;

        while(getline(inputFile,line))
        {
            unsigned int index = 0;
            size_t lineSize;

            lineSize = line.size();

            //cout << "Encoded: " << line << endl;

            while(index < lineSize)
            {
                if((line[index] >= 97 && line[index] <= 102))
                {
                    line[index] = line[index] + 20;
                }
                else if(line[index] >= 117 && line[index] <= 122)
                {
                    line[index] = line[index] - 20;
                }
                else if(line[index] >= 103 && line[index] <= 109)
                {
                    line[index] = line[index] + 7;
                }
                else if(line[index] >= 110 && line[index] <= 116)
                {
                    line[index] = line[index] -7;
                }

                ++index;
            }

            cout << line << endl;
        }

    }

    return 0;
}
