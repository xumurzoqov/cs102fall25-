#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int rank = rand() % 13 + 1; // 1–13
    int suit = rand() % 4;      // 0–3

    string rankName, suitName;
    switch (rank) {
        case 1: rankName = "Ace"; break;
        case 11: rankName = "Jack"; break;
        case 12: rankName = "Queen"; break;
        case 13: rankName = "King"; break;
        default: rankName = to_string(rank);
    }
    switch (suit) {
        case 0: suitName = "Clubs"; break;
        case 1: suitName = "Diamonds"; break;
        case 2: suitName = "Hearts"; break;
        case 3: suitName = "Spades"; break;
    }

    cout << "You picked: " << rankName << " of " << suitName << endl;

    return 0;
}
