// Player.h

#ifndef PLAYER_H
#define PLAYER_H

#include <string>

/**
 * @brief Класс, представляющий игрового персонажа.
 *
 * Данный класс содержит информацию о имени, здоровье и уровне
 * игрового персонажа.
 */
class Player {
public:
    /**
     * @brief Конструктор по умолчанию.
     *
     * Создает объект класса Player с пустым именем, здоровьем 100
     * и уровнем 1.
     */
    Player();

    /**
     * @brief Конструктор с параметрами.
     *
     * @param n Имя игрока.
     * @param h Здоровье игрока.
     * @param l Уровень игрока.
     */
    Player(const std::string& n, int h, int l);

    // ... Другие методы и операторы ...

private:
    std::string name; /**< Имя игрока. */
    int health;      /**< Здоровье игрока. */
    int level;       /**< Уровень игрока. */
};

#endif  // PLAYER_H
