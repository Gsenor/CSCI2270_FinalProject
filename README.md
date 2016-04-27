Team members: Burak Karaoglu, Kyunghee Lee
Emails: meka7330@colorado.edu, kyle0909@colorado.edu
Github UserIDs: mbkaraoglu, kyung0748
Final Project gitHub URL: https://github.com/kyung0748/CSCI2270_FinalProject.git


Project Summary:

A minimum spanning tree is a spanning tree of a connected, undirected graph. It connects all the vertices of the graph together with the minimal total weighting for its edges.
A single graph can have many different spanning trees. We can also assign a weight to each edge, which is a number representing how unfavorable it is, and use this to assign a weight to a spanning tree by computing the sum of the weights of the edges in that spanning tree. A minimum spanning tree (MST) or minimum weight spanning tree is a spanning tree with the least weight.

There are quite a few useful cases for minimum spanning trees. One representative example known broadly is a telecommunication company which is trying to lay out cables in a new neighborhood. If it is constrained to bury the cable only along certain paths, then there would be a graph representing which points are connected by those paths. Some of those paths might be more expensive because they are longer or require the cable to be buried deeper. These paths would be represented by edges with larger weights/cost.
			
In this project, we implement Kruskal's algorithm to find the MST of a graph. First, we read from a txt file which has the data that we need for our project. Our data is a table which contains major cities in the United States and how far the distances are between them if they are in the same district. We build a graph from the data using public methods within the MST class. We add each city as a vertex (the vertices are stored in a vector within the class) and the direct paths between them as edges (also stored in vectors). We then display a menu for the user and the user can choose between three choices. Depending on the choice, the code either displays all the vertices in the graph and the edges by traversing the whole graph, applies Kruskal’s algorithm to find the MST of the graph, or quits the program.


How to Run:

The program requires the text file that includes cities and distances between cities. Please download the text file called bestplaces.txt on Github and put this file in the same folder where the .cpp and .h files are saved. When you run the program, the program asks you to type the number of cities stored in the bestplaces.txt file. Once you type a correct integer value, the program will read through the text file and store all the information between cities. It will also create an entire map in the system and find out the minimum spanning tree using Kruskal’s algorithm. Make sure that all cities must be connected either directly or indirectly when you change cities’ data in the bestPlaces.txt file. 


Dependencies:

Once you download four files (FinalProject.cpp, MST.cpp, MST.h, and bestPlaces.txt), you can start to run these through Virtual Machine or any other software programs that helps to run these codes. 


References:

1. Ensley, D. E., & Crawley, J. W. (2006). Discrete mathematics: Mathematical reasoning and proof with puzzles, patterns, and games (Vol. Ch7, Graphs and Trees). Hoboken, NJ: Wiley. 
2. Hoenigman, R. (2015). Visualizing Data Structures (Vol. Ch12, Graphs).
3. Barnwal, A. (2012). Greedy Algorithms | Set 2 (Kruskal's Minimum Spanning Tree Algorithm) - GeeksforGeeks. Retrieved April 18, 2016, from http://www.geeksforgeeks.org/greedy-algorithms-set-2-kruskals-minimum-spanning-tree-mst/ 

