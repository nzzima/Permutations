#include "pch.h"
void print_permutate(int number, int* permute, int numeric);

void permute_by_transposition(const int number)
{
	int numeric = 1;
	auto* permut_now = new int[number + 2];
	auto* permut_rev = new int[number];
	auto* direction = new int[number + 1];
		
	permut_now[0] = number + 1;
	permut_now[number + 1] = number + 1;
	
	for (auto i = 1; i < number + 1; ++i)
	{
		permut_now[i] = i;
		permut_rev[i] = i;
		direction[i] = -1;
	}
	
	direction[1] = 0;
	
	while(true)
	{
		print_permutate(number, permut_now, numeric);
		numeric++;
		
		auto temp = number;
		
		while (permut_now[direction[temp] + permut_rev[temp]] > temp)
		{
			direction[temp] = -direction[temp--];
			if (temp == 1)
				return;
		}
		swap(permut_now[permut_rev[temp]], permut_now[permut_rev[temp] + direction[temp]]);
		swap(permut_rev[permut_now[permut_rev[temp]]], permut_rev[temp]);
	}
}

void print_permutate(int number, int* permute, int numeric)
{
	cout << numeric << "->" <<" | ";
	for (auto i = 1; i < number + 1; ++i)
		cout << permute[i] << " ";
	cout << "|" << endl;
}