# Week 13

# Подготовка за изпит

  1) а) Да се напише програма, която извежда интервал от време, зададен като брой секунди (не повече от 107), в брой дни, часове, минути и секунди.
  Пример: 100000 секунди = 1 ден, 3 часа, 46 минути и 40 секунди.

  б) Да се напише програма, която намира сумата на квадратните корени на всички положителни нечетни числа в даден затворен интервал [a; b],

  2) а) Да се напише функция, която проверява дали дадено цяло число x е точна степен на дадено цяло число n.

  б) Да се напише функция, която по дадени цели числа k и n (1 ≤ k,n ≤ 100) и масив от цели числа a, определя дали в a има поне k числа, които са точни степени на n.

  3) а) Да се напише функция, която сравнява два масива от цели числа лексикографски (като низове). Казваме, че масивът a = (a<sub>0</sub>, a<sub>1</sub>,..., a<sub>n-1</sub>) лексикографски предхожда масива b = (b<sub>0</sub>, <sub>1</sub>, ... b<sub>m-1</sub>), ако има число k ≤ n, така че a<sub>0</sub> = b<sub>0</sub>, a<sub>1</sub> = b<sub>1</sub>, ... a<sub>k-1</sub> = b<sub>k-1</sub>, но a<sub>k</sub> < b<sub>k</sub> или k = n < m. Функцията да връща -1, ако първият масив предхожда втория, 1, ако вторият предхожда първия, и 0 ако двата масива съвпадат.

  б) Да се напише функция, която в дадена матрица намира номерата на тези редове, които са съответно лексикографски най-малък и най-голям.

  4) Лабиринт се представя като квадратна матрица от символи с размери 5x5, където празна клетка се представя с интервал, непроходима клетка се представя със символа '#', а в клетки, означени със символа '$', е поставена кесия с жълтици. Юнакът влиза в лабиринта от клетка с координати (0, 0) и на всяка стъпка може да избира да продължи на изток, запад, север или юг, но след като мине през някоя клетка, след него таванът се срутва и клетката става непроходима.
  Да се напише програма, която по даден лабиринт определя дали е възможно юнакът да събере всички жълтици, след което да излезе от лабиринта от клетка с координати (4, 4). Приемаме, че юнакът знае колко жълтици има в лабиринта.
