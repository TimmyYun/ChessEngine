#include <stdio.h>
#include "chessengine.h"

int main() {

	AllInit();

	U64 playBitBoard = 0ULL;

	playBitBoard |= (1ULL << SQ64(D2));
	playBitBoard |= (1ULL << SQ64(A5));

	printf("\n");
	PrintBitBoard(playBitBoard);
	int count = CNT(playBitBoard);
	printf("Count: %d\n", count);
	return 0;
}
