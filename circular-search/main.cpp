#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main()
{

    // sakht vector haie dataha
    vector<vector<float> > dataA;
    vector<vector<float> > dataB;
    vector<vector<float> > dataC;
    vector<vector<float> > dataD;
    vector<vector<float> > dataE;

    // khondan file haie text
    ifstream fileA("a.txt");
    ifstream fileB("b.txt");
    ifstream fileC("c.txt");
    ifstream fileD("d.txt");

    // tedad khat haie file
    int numLinesA = 0;
    int numLinesB = 0;
    int numLinesC = 0;
    int numLinesD = 0;

    // ersal az fileA be dataA
    string lineA;
    getline(fileA, lineA);
    while (getline(fileA, lineA))
    {
        numLinesA++;
    }

    fileA.clear();
    fileA.seekg(0, ios::beg);
    for (int i = 0; i < numLinesA; i++)
    {
        vector<float> temp;
        for (int j = 0; j < 4; j++)
        {
            float tempFloat;
            fileA >> tempFloat;
            temp.push_back(tempFloat);
        }
        dataA.push_back(temp);
    }

    // ersal az fileB be dataB
    string lineB;
    getline(fileB, lineB);
    while (getline(fileB, lineB))
    {
        numLinesB++;
    }

    fileB.clear();
    fileB.seekg(0, ios::beg);
    for (int i = 0; i < numLinesB; i++)
    {
        vector<float> temp;
        for (int j = 0; j < 4; j++)
        {
            float tempFloat;
            fileB >> tempFloat;
            temp.push_back(tempFloat);
        }
        dataB.push_back(temp);
    }

    // ersal az fileC be dataC
    string lineC;
    getline(fileC, lineC);
    while (getline(fileC, lineC))
    {
        numLinesC++;
    }

    fileC.clear();
    fileC.seekg(0, ios::beg);
    for (int i = 0; i < numLinesC; i++)
    {
        vector<float> temp;
        for (int j = 0; j < 4; j++)
        {
            float tempFloat;
            fileC >> tempFloat;
            temp.push_back(tempFloat);
        }
        dataC.push_back(temp);
    }

    // ersal az fileD be dataD
    string lineD;
    getline(fileD, lineD);
    while (getline(fileD, lineD))
    {
        numLinesD++;
    }

    fileD.clear();
    fileD.seekg(0, ios::beg);
    for (int i = 0; i < numLinesD; i++)
    {
        vector<float> temp;
        for (int j = 0; j < 4; j++)
        {
            float tempFloat;
            fileD >> tempFloat;
            temp.push_back(tempFloat);
        }
        dataD.push_back(temp);
    }

    // gereftan 2 soton aval har file
    vector<vector<float> > dataA2;
    vector<vector<float> > dataB2;
    vector<vector<float> > dataC2;
    vector<vector<float> > dataD2;

    for (int i = 0; i < numLinesA; i++)
    {
        vector<float> temp;
        temp.push_back(dataA[i][0]);
        temp.push_back(dataA[i][1]);
        dataA2.push_back(temp);
    }

    for (int i = 0; i < numLinesB; i++)
    {
        vector<float> temp;
        temp.push_back(dataB[i][0]);
        temp.push_back(dataB[i][1]);
        dataB2.push_back(temp);
    }

    for (int i = 0; i < numLinesC; i++)
    {
        vector<float> temp;
        temp.push_back(dataC[i][0]);
        temp.push_back(dataC[i][1]);
        dataC2.push_back(temp);
    }

    for (int i = 0; i < numLinesD; i++)
    {
        vector<float> temp;
        temp.push_back(dataD[i][0]);
        temp.push_back(dataD[i][1]);
        dataD2.push_back(temp);
    }

    // gereftan 2 soton dovom har file
    vector<vector<float> > dataA3;
    vector<vector<float> > dataB3;
    vector<vector<float> > dataC3;
    vector<vector<float> > dataD3;

    for (int i = 0; i < numLinesA; i++)
    {
        vector<float> temp;
        temp.push_back(dataA[i][2]);
        temp.push_back(dataA[i][3]);
        dataA3.push_back(temp);
    }

    for (int i = 0; i < numLinesB; i++)
    {
        vector<float> temp;
        temp.push_back(dataB[i][2]);
        temp.push_back(dataB[i][3]);
        dataB3.push_back(temp);
    }

    for (int i = 0; i < numLinesC; i++)
    {
        vector<float> temp;
        temp.push_back(dataC[i][2]);
        temp.push_back(dataC[i][3]);
        dataC3.push_back(temp);
    }

    for (int i = 0; i < numLinesD; i++)
    {
        vector<float> temp;
        temp.push_back(dataD[i][2]);
        temp.push_back(dataD[i][3]);
        dataD3.push_back(temp);
    }


    vector<float> temp;
    vector<float> temp2;
    vector<float> temp3;
    vector<float> temp4;

    // moghayese 2 soton dovom data 1 ba 2 soton aval data 2 va peida kardan moshtarak ha
    for (int i = 0; i < numLinesA; i++)
    {
        bool found = false;
        int count = 0;
        for (int j = 0; j < numLinesB; j++)
        {
            if (dataA3[i][0] == dataB2[j][0])
            {
                found = true;

                temp.push_back(dataA2[i][0]);
                temp.push_back(dataA2[j][1]);
                temp.push_back(dataA3[j][0]);
                temp.push_back(dataA3[j][1]);
                temp.push_back(dataB3[j][0]);
                temp.push_back(dataB3[j][1]);
            }
        }
    }

    // moghayese 2 soton dovom data 2 ba 2 soton aval data 3 va peida kardan moshtarak ha

    for (int i = 0; i < numLinesB; i++)
    {
        bool found = false;
        for (int j = 0; j < numLinesC; j++)
        {
            if (dataB3[i][0] == dataC2[j][0])
            {

                found = true;

                temp2.push_back(dataC3[j][0]);
                temp2.push_back(dataC3[j][1]);
            }
        }
    }

    // moghayese 2 soton dovom data 3 ba 2 soton aval data 4 va peida kardan moshtarak ha
    for (int i = 0; i < numLinesC; i++)
    {
        bool found = false;

        for (int j = 0; j < numLinesD; j++)
        {
            if (dataC3[i][0] == dataD2[j][0])
            {

                found = true;

                temp3.push_back(dataD3[j][0]);
                temp3.push_back(dataD3[j][1]);
            }
        }
    }

    // moghayese 2 soton dovom data 4 ba 2 soton aval data 1 va peida kardan moshtarak ha
    for (int i = 0; i < numLinesD; i++)
    {
        bool found = false;

        for (int j = 0; j < numLinesA; j++)
        {
            if (dataD3[i][0] == dataA2[j][0])
            {
                temp4.push_back(dataD3[j][0]);
                temp4.push_back(dataD3[j][1]);
                found = true;
            }
        }
    }

    // jame kardan hame vector ha dar yek vector
    vector<vector<float> > tempVec;
    tempVec.push_back(temp);
    tempVec.push_back(temp2);
    tempVec.push_back(temp3);
    tempVec.push_back(temp4);

    // ersal vector tempVec be vector dataE
    for (int i = 0; i < tempVec.size(); i++)
    {
        dataE.push_back(tempVec[i]);
    }

    // sakhte file text as dataE
    ofstream fileE;
    fileE.open("result.txt");
    for (int i = 0; i < dataE.size(); i++)
    {
        for (int j = 0; j < dataE[i].size(); j++)
        {
            fileE << dataE[i][j] << " ";
        }
        fileE << endl;
    }
    fileE.close();

    // print vector dataE
    for (int i = 0; i < dataE.size(); i++)
    {
        for (int j = 0; j < dataE[i].size(); j++)
        {
            cout << dataE[i][j] << " ";
        }
        cout << endl;
    }
}