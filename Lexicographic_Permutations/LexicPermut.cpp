#include "pch.h"

string permutation (string in_string)
{
	int len = in_string.length();
	string result_str = "";

	for (auto i = len - 1; i > 0; --i)
	{
		if (in_string[i - 1] < in_string[i])
		{
			int temp = i;
			for (auto j = temp; j < len; ++j)
			{
				if (in_string[j] <= in_string[temp] && in_string[i - 1] < in_string[j])
					temp = j;
			}

			swap(in_string[i - 1], in_string[temp]);

			for (auto k = len - 1; i < k; ++i, --k)
				swap(in_string[i], in_string[k]);

			result_str = in_string;
			break;
		}
	}

	return result_str;
}

vector<string> lexicographic_permute(string symbol_set)
{
	vector<string> result_str;
	auto str = symbol_set;
	while (!str.empty())
	{
		result_str.push_back(str);
		str = permutation(str);
	}
	return result_str;
}

void LexPermute(int number)
{
	int i, j, temp, left, right;
	int* Permut = new int[number];

	for (j = 0; j < number; ++j)
		Permut[j] = j + 1;
	
	for (;;) 
	{
		for (i = 0; i < number; ++i)
			cout << Permut[i] << " ";
		cout << endl;

		for (i = number - 2; i > -1 && Permut[i] > Permut[i + 1]; --i);
		
		if (i == -1) 
			break;
		
		j = number - 1;
		while (Permut[i] > Permut[j]) 
			--j;

		temp = Permut[i];
		Permut[i] = Permut[j];
		Permut[j] = temp;
		
		left = i + 1;
		right = number - 1;
		
		while (right > left) 
		{
			temp = Permut[right];
			Permut[right--] = Permut[left];
			Permut[left++] = temp;
		}
	}
	delete[] Permut;
}
