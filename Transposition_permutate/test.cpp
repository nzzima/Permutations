#include "pch.h"
#include "Transpos_permute.hpp"

TEST(Permute_by_transposition, ClassicTest_for_3)
{
	permute_by_transposition(3);
}

TEST(Permute_by_transposition, ClassicTest_for_4)
{
	permute_by_transposition(4);
}

TEST(Permute_by_transposition, ClassicTest_for_5)
{
	permute_by_transposition(5);
}