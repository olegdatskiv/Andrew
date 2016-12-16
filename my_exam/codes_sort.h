#pragma once
#ifndef _CODES_SORT_H_
#define _CODES_SORT_H_
#include<iostream>
#include "goods.h"
int sort(Goods *array, int size)
{
	for (int i=0 ; i<size; i++)
		for (int j = 0; j < size - 1; j++)
		{
			if (array[i].get_number() > array[j].get_number())
			{
				int temp = array[i].get_number();
				array[i].set_number(array[j].get_number());
				array[j].set_number(temp);
			/*    тут якось поміняти би не завадило */
			}
		
		}

	return 0;
}

#endif