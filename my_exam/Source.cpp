#include<iostream>
#include "goods.h"
#include"the_cheapest_product.h"
#include"codes_sort.h"

using namespace std;

int main()
{
	int n;
	cout << " enter amount of the products :  ";
	cin >> n;
	Goods *product = new Goods [n];

	for (int i = 0; i < n; i++)
		product[i].input();

//	find_low_price(product, n);
/*
	for (int i = 0; i < n; i++){if (product[i].get_price() == find_low_price(product, n) ) { product[i].print() ; }}
	for (int i = 0; i < n; i++){if (product[i].get_price() == find_the_highest_price(product, n)) { product[i].print(); }}
	*/
	sort(product, n);

	for (int i = 0; i < n; i++)
		product[i].print();
	
	system("pause");
	return 0;
	
}