#include<iostream>
using namespace std;
main()
{
	cout<<"Enter vegetable price per kilogram (in coins): ";
	float vegPrice;
	cin>>vegPrice;
	cout<<"Enter fruit price per kilogram (in coins): ";
	float fruitPrice;
	cin>>fruitPrice;
	cout<<"Enter total kilograms of vegetables: ";
	int vegKg;
	cin>>vegKg;
	cout<<"Enter total kilograms of fruits: ";
	int fruitKg;
	cin>>fruitKg;
	float totalVeg;
	totalVeg=vegPrice*vegKg;
	float totalFruit;
	totalFruit=fruitPrice*fruitKg;
	float earning;		
	earning=totalVeg+totalFruit;
	earning=earning/1.94;
	cout<<"Total earnings in Rupees (Rps): "<<earning;
	

	
}