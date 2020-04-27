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
        
Метод золотого сечения 

Определение: Говорят, что точка ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/x.png) осуществляет золотое сечение отрезка ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/ab.png),если ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/zol1.png)

В качестве ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/x1.png) и ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/x2.png)  выберем точку золотого сечения отрезка и симметричную ей. Если ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/x1x2.png), то при указанном выборе точек получаем, что ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/x1.png) точка золотого сечения отрезка ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/ax2.png), а ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/x2.png) - точка золотого сечения отрезка ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/x1b.png). Таким образом, на каждом шаге, кроме первого, необходимо вычислять значение только в одной точке, вторая берется из предыдущего шага. 

Описание метода 

1). ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/x1x2ab.png)

2). Повторять:
      
   3). Если ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/f1f2.png), то ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/a=x1.png);
      
   4). Если ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/f2f1.png), то ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/b=x2.png);
      
5). пока ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/b-aE.png)

6). ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/xab.png)

Анализ метода

Считаем, что один шаг - это один этап цикла 

![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/lam.png). Тогда, считая длину отрезка на каждом шаге ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/trek.png), получаем:
      
   ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/tre0.png)
   
   ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/tre1.png)
   
   ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/tre2.png)
   
Нетрудно проверить, что
      
   ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/trek1.png) - числа Фибонначчи.
   
С другой стороны, выполняется равенство:

   ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/trek2.png)
   
Чтобы погрешность вычисления была менее ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/E.png), должна по крайней мере выполняться оценка на число шагов:  

   ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/k1.png)
   
Тогда значение будет вычисляться в ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/Nk1.png) точках.
      
Метод Свенна

Начальный этап:
      
   1.) задать ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/z0.png) 
      
   2.) выбрать шаг h равным 0.001
      
Основной этап:
   Шаг 1:
            Установить направление убывания целевой функции. Для этого надо взять ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/x2x1h.png). Если f1 < f2, то надо поменять направление движения h = -h.
     
   Шаг 2: 
            Вычислять ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/fk.png) в точках ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/x1k.png), где ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/fk123.png) до тех пор пока не придем в точку xn такую что ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/fnfn-1.png).
     
   Шаг 3: 
            Установить начальный интервал локализации минимума ![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/a1xn-2.png)
            
            
Практическая часть

Функция в которой описан метод Свенна и метод золотого сечения для первой переменной:

![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/zol1dlax1.png)

Функция в которой описан метод Свенна и метод золотого сечения для второй переменной:

![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/zol2dlax2.png)

Метод покоординатного спуска

![Image alt](https://github.com/AzatTaziev426/lab6/blob/master/koorspusk.png)
