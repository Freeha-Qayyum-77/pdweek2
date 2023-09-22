#include<iostream>	
using namespace std;
main()
{
	cout<<"Number of square meters you can paint: ";
	int meters;
	cin>>meters;
	cout<<"Width of the single wall (in meters): ";
	int width;
	cin>>width;
	cout<<"Height of the single wall (in meters): ";
	int height;
	cin>>height;
	int walls;
	walls=width*height;
	walls=meters/walls;
	cout<<"Number of walls you can paint: "<<walls;
	}
	