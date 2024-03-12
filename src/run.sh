# Oliver Fedderson
rm a.out
clear
echo "Running main.cpp..."
g++ -std=c++11 main.cpp classes/input/input.cpp classes/enemy/enemy.cpp classes/level/level.cpp classes/player/player.cpp classes/saves/saves.cpp classes/shield/shield.cpp classes/weapon/weapon.cpp classes/img/img.cpp classes/spell/spell.cpp
./a.out