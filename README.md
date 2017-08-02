# Объектно-ориентированное программирование на С++
Вводный курс по C++ и ООП со вкраплениями нетривиальных вещей

План:
* [Тема 0 - Введение](https://github.com/ar1st0crat/CppCourse/tree/master/Lectures/Lec00%20-%20Intro)
* [Тема 1 - Работа с памятью](https://github.com/ar1st0crat/CppCourse/tree/master/Lectures/Lec01%20-%20Memory%20management)
* [Тема 2 - Классы и объекты. Инкапсуляция](https://github.com/ar1st0crat/CppCourse/tree/master/Lectures/Lec02%20-%20Classes,%20Objects,%20Encapsulation)
* Тема 3 - Перегрузка операторов
* Тема 4 - Наследование
* Тема 5 - Полиморфизм. Абстрактные классы и интерфейсы
* Тема 6 - Агрегация/Композиция vs. Наследование vs. Дружественность
* Тема 7 - RTTI, dynamic_cast
* Тема 8 - Исключения
* Тема 9 - Шаблонные функции и классы. SFINAE
* Тема 10 - Библиотека STL
* Тема 11 - RAII. Умные указатели
* Тема 12 - Современные стандарты С++


Темы и вопросы курса поясняются на примерах классов и интерфейсов проекта **TaxiService**. В лекциях потихоньку будет писаться эта система (впрочем, будет обозначен только каркас).

*Данный проект можно рассматривать как "учебный стенд" с одним слоем упрощенной бизнес-логики для демонстрации основ ООП. Более продвинутые техники ООП рассматриваются в других курсах и на факультативных занятиях*

Предметная область (domain) - служба такси.

Кратко:

- КЛИЕНТ заказывает такси по телефону (СИСТЕМА добавляет информацию по КЛИЕНТУ, если он обращается впервые)
- ОПЕРАТОР принимает звонок и формирует ЗАКАЗ, включая в него пожелания КЛИЕНТА (в виде ответов на определенный набор вопросов), пункт отправки и пункт назначения
- СИСТЕМА анализирует данные предзаказа от ОПЕРАТОРА, находит подходящего ВОДИТЕЛЯ и МАШИНУ, окончательно формирует ЗАКАЗ и отсылает смс КЛИЕНТУ с номером заказа и информацией
- ВОДИТЕЛЬ может отменить ЗАКАЗ (если КЛИЕНТ не явился); если КЛИЕНТ дважды игнорировал заказ, он добавляется в черный список
- СИСТЕМА учитывает рейтинг ВОДИТЕЛЯ и данные об активности КЛИЕНТА
- ОПЕРАТОР и ВОДИТЕЛЬ числятся сотрудниками службы, им начисляется зарплата по разным правилам
- СИСТЕМА хранит (и может отображать) информацию о всех ВОДИТЕЛЯХ, МАШИНАХ, ЗАКАЗАХ, КЛИЕНТАХ, ОПЕРАТОРАХ


&#43;

Демо-проект "Консольный блекджек" с дополнительными элементами:
- с++14 (auto, unique_ptr, shared_ptr, move, lambdas)
- автодокументация кода с doxygen
- юнит-тесты google test
- интеграционные тесты google mock
- директивы препроцессора
- файлы makefile


В репозитории хранится несколько релизных версий:


[Версия 1](https://github.com/ar1st0crat/CppCourse/releases/tag/'demo_ver1')

Вариант "Студенческий середнячок": модульная объектно-ориентированная декомпозиция, пара интерфейсов, обработка исключений, кое-какие возможности С++ новых стандартов, добавлены простейшие юнит-тесты.

[Версия 2](https://github.com/ar1st0crat/CppCourse/releases/tag/'demo_ver2')

Предыдущий вариант, но с добавлением умных указателей. Обязательно ознакомиться со статьей Эрба Саттера: [GOTW #91](https://herbsutter.com/2013/06/05/gotw-91-solution-smart-pointer-parameters/) для понимания принципов ведения и передачи умных указателей в качестве параметров.

[Версия 3](https://github.com/ar1st0crat/CppCourse/tree/master/DemoProject)

Более-менее взрослый вариант: архитектура MVP, паттерны State и Strategy, проект достаточно тестируемый и расширяемый, добавлены интеграционные тесты, некоторые решения относительно кода были приняты после написания тестов (TDD).
