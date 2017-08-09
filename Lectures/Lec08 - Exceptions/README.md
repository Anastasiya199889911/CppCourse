# Лекция 8 - Исключения

План:

* Исключения как способ передачи управления, альтернативы исключениям
* Синтаксис ```throw, try, catch```
* Раскручивание стека (stack unwinding)
* Исключение в конструкторе
* Исключение в деструкторе
* Собственный класс исключения, ```std::exception```
* Еще стандартные исключения (```std::out_of_range```, ```std::bad_cast``` и др.)
* SEH (структурированная обработка исключений)
* Цена исключений
* Разговор о safe-code (инварианты, assert, RAII, TOCTOU и др.)


Лекция начинается с довольно "технической" темы, а заканчивается кодерскими размышлениями "ваапше о жизни".

В основном, сопровождающий код сосредоточен в функции ```main()```. В проекте TaxiService изменения коснулись класса **Booking** - теперь в его перегруженном индексаторе генерируется стандартное исключение ```std::out_of_range``` при выходе за границы массива адресов маршрута такси. Также добавлен для примера класс пользовательского исключения **WrongAddressException**, имя которого отвечает само за себя. Этот класс почти идентичен стандартному ```std::invalid_argument```, но еще содержит дополнительное описательное поле типа стек-трейса.