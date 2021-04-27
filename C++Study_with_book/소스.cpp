#include<iostream>

int main()
{
	enum class PieceType
	{
		King = 1,
		Queen,
		Rook=10,
		Pawn
	};

	std::cout << static_cast<int>(PieceType::Pawn) << std::endl;
}