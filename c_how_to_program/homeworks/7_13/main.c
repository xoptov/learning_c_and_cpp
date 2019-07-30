// Решение для задачи 7.12: a

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int wDeck[][13]);
void deal(const int wDeck[][13], const char *wFace[], const char *wSuit[], int player[][13]);

int main()
{
    const char *suit[4] = {"Черви", "Бубны", "Трефы", "Пики"};

    const char *face[13] = {
        "Туз", "Двойка", "Тройка",
        "Четвёрка", "Пятёрка", "Шестёрка",
        "Семёрка", "Восьмёрка", "Девятка",
        "Десятка", "Валет", "Дама", "Король"
    };

    int deck[4][13] = {0};
    int player[4][13] = {0};

    srand(time(0));

    shuffle(deck);
    deal(deck, face, suit, player);

    return 0;
}

void shuffle(int wDeck[][13])
{
    int row;
    int column;
    int card;

    for (card = 1; card <= 52; card++) {
        do {
            row = rand() % 4;
            column = rand() % 13;
        } while (wDeck[row][column] != 0);

        wDeck[row][column] = card;
    }
}

void deal(const int wDeck[][13], const char *wFace[], const char *wSuit[], int player[][13])
{
    int card;
    int row;
    int column;

    for (card = 1; card <= 5; card++) {
        for (row = 0; row <= 3; row++) {
            for (column = 0; column <= 12; column++) {
                if (wDeck[row][column] == card) {
                    player[row][column] = 1;
                }
            }
        }
    }
}
