Лабораторная работа № 6. Безусловный экстремум.

Выполнил студент группы 426
Тазиев Азат Фаритович
Вариант № 6

Найти точку максимума функции

![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/funct.png)

![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/gran.png)

методом покоординатного спуска. Для одномерной минимизации использовать метод золотого сечения. Для поиска интервала унимодальности использовать алгоритм Свенна. В окрестности точки максимума построить линии уровня и траекторию поиска (на одном графике). За своевременное выполнение задания начисляется 6 баллов. Реализовав дополнительно следующие методы можно получить по 3 балла за каждый метод: метод случайного поиска, метод Нелдера-Мида, метод Пауэлла, метод Хука-Дживса, метод Розенброка.

Теоретическая часть

Метод покоординатного спуска

Алгоритм

Вход: функция ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/FR.png)

Выход: найдена точка максимума X

1. Инициализация некоторым значением  ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/x0.png)

2. повторять:

      для ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/in.png)
      
      1). фиксируем значения всех переменных кроме ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/xi.png), получая одномерную функцию ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/fxi.png)
      
      2). проводим одномерную оптимизацию по переменной ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/xi.png), методом золотого сечения
      
      3). если выполен критерий останова, то возвращаем текущее значение ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/x1xn.png)

Критерий останова

Критерии остановки процесса приближенного нахождения минимума могут быть основаны на различных соображениях. Некоторые из них:

1. ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/usl1.png)

2. ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/usl2.png)

Здесь ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/xkrn.png) - значение, полученное после ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/k.png) -го шага оптимизации. ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/E.png) - наперед заданное положительное число. 
        
