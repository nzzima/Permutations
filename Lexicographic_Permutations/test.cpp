#include "pch.h"
#include "LexixPermut.hpp"

TEST(LexicographicPermuteTests, Test_for_str_with_3_elements)
{
	string str = "abc";
	auto result = lexicographic_permute(str);

	auto count = 0;
	for (auto it = result.begin(); it != result.end(); ++it)
	{
		count++;
		cout <<" | "<< *it <<" |"<< endl;
	}
	cout << "Total permutations = " << count << endl;
}

TEST(LexicographicPermuteTests, Test_for_str_with_4_elements)
{
	const string str = "abcd";
	auto result = lexicographic_permute(str);

	auto count = 0;
	for (auto it = result.begin(); it != result.end(); ++it)
	{
		count++;
		cout << " | " << *it << " |" << endl;
	}
	cout << "Total permutations = " << count << endl;
}

TEST(LexicographicPermuteTests, Check_Test_for_example_func)
{
	LexPermute(3);
}