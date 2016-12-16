#pragma once
#ifndef _THE_CHEAPEST_PRODUCT_
#define _THE_CHEAPEST_PRODUCT_
#include "goods.h"
using namespace std;


double  find_low_price(Goods *array  , int size)
{
	double min;
	 min = array[0].get_price() ;

	for (int i = 1; i < size; i++)
	{
		if (array[i].get_price() < min) { min = array[i].get_price() ; }
	}
	return min ; 
}


double  find_the_highest_price(Goods *array, int size)
{
	double max;
	max = array[0].get_price();

	for (int i = 1; i < size; i++)
	{
		if (array[i].get_price() > max) { max = array[i].get_price(); }
	}
	//cout << "the worst prcie for you is  " << max + 0.00 << " $  \n\n";
	return max;
}

#endif