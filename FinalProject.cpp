#include "MST.h"	
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	MST mst;
	int choice;
	int f = 0;
	string city1;
	string city2;
	
	int cityNum;
	cout << "Enter the number of cities" << endl;
	cin >> cityNum;


	ifstream inFile; //open the file
	inFile.open("bestPlaces.txt"); //the file was not opened
	if (inFile.fail())
	{
		cout << "The file was not successfully opened" << endl;
	}
	else // the file was opened
	{
		//while(!inFile.eof()) // read/get every line of the file and stor it.

		string cityName[15];
		string temp;
		string weightTemp;
		int weight;


		//-----------------------------------------------
		// addVertex to Graph
		getline(inFile, temp, ',');
		int i, j;
		for (i = 0; i < cityNum-1; i++)
		{
			getline(inFile, cityName[i], ',');
			mst.addVertex(cityName[i]);
			//cout << cityName[i] << endl;
		}
		getline(inFile, cityName[i], '\n');
		mst.addVertex(cityName[i]);
		//cout << cityName[i] << endl;


		//-----------------------------------------------		
		// addEdges to Graph
		for (i = 0; i < cityNum; i++)
		{
			getline(inFile, temp, ',');
			for (j = 0; j < cityNum-1; j++)
			{
				getline(inFile, weightTemp, ',');
				weight = atoi(weightTemp.c_str());
				//cout << weight << endl;
				if (weight != 0 && weight != -1)
					mst.addEdge(cityName[i], cityName[j], weight);

			}
			getline(inFile, weightTemp, '\n');
			weight = atoi(weightTemp.c_str());
			//cout << weight << endl;
			//cout << "---------------------------" << endl;
			if (weight != 0)
				mst.addEdge(cityName[i], cityName[j], weight);
		}
	}
	inFile.clear();
	inFile.seekg(0, ios::beg);


	//-----------------------------------------------		
	//Print menu
	while (1)
	{
		cout << "======Main Menu======" << endl;
		cout << "1. Print vertices" << endl;
		cout << "2. KruskalMST" << endl;
		cout << "3. Quit" << endl;

		cin >> choice;

		//clear out cin
		cin.clear();
		cin.ignore(10000, '\n');
		switch (choice)
		{
		case 1:
			mst.displayEdges();
			break;
		case 2:
			mst.KruskalMST();
			break;
		case 3:  cout << "Goodbye!" << endl;  f = 1; break;
		default: cout << "undefiend" << endl;
		}
		if (f == 1)
			break;
	}

	return 0;
}
