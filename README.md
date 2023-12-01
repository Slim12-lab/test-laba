[![Coverage Status](https://coveralls.io/repos/github/Slim12-lab/test-laba/badge.svg?branch=main)](https://coveralls.io/github/Slim12-lab/test-laba?branch=main)
[![Quality Gate](https://sonarcloud.io/api/project_badges/measure?project=Slim12-lab_test-laba&metric=alert_status)](https://sonarcloud.io/dashboard?id=Slim12-lab_test-laba)
[![Bugs](https://sonarcloud.io/api/project_badges/measure?project=Slim12-lab_test-laba&metric=bugs)](https://sonarcloud.io/summary/new_code?id=Slim12-lab_test-laba)
[![Code smells](https://sonarcloud.io/api/project_badges/measure?project=Slim12-lab_test-laba&metric=code_smells)](https://sonarcloud.io/dashboard?id=Slim12-lab_test-laba)
# План тестирования: 
 
# Аттестационное тестирование
  - Тест А1 (положительный)
    - Начальное состояние: Открытый терминал
    - Действие: Пользователь запускает программу, сначала вводит 2, потом 1 -4 4
    - Ожидаемый результат:
        ```            
		Fibonachi 2
      	ROOT1 2.0
		ROOT2 2.0
        ```               
  - Тест А2 (негативный)
    - Начальное состояние: Открытый терминал
    - Действие: Пользователь запускает программу и вводит число < 0
    - Ожидаемый результат: 
      ```                  
     	Enter non-negative number!
      ```                         
  - Тест А3 (положительный)
    - Начальное состояние: Открытый терминал
    - Действие: Пользователь запускает программу, сначала вводит 0, потом 0 0 0
    - Ожидаемый результат: 
        ```                           
      	Fibonachi 0
		ROOT1 0
		ROOT2 0
        ```                               
  - Тест А4 (негативный)
    - Начальное состояние: Открытый терминал</li>
    - Действие: Пользователь запускает программу, вводит banana</li>
    - Ожидаемый результат: 
        ```                       
      	Enter correct number!
        ```          
  - Тест А5 (негативный)
    - Начальное состояние: Открытый терминал</li>
    - Действие: Пользователь запускает программу, вводит 0, потом ba</li>
    - Ожидаемый результат: 
        ```                       
      	Enter correct number!
        ```                  

# Блочное тестирование (класс my_func)
<ol>
  <li>
    <h3>Метод int fibonachi(int num)</h3>
    <ol>
    	<li>
    	  <h4>Тест Б1.1 (положительный)</h4>
    	  <ul>
    	    <li>Входные данные: 4</li>
    	    <li>Ожидаемый результат: 3</li>
    	  </ul>
    	</li>
    	<li>
    	  <h4>Тест Б1.2 (положительный)</h4>
    	  <ul>
    	    <li>Входные данные: 0</li>
    	    <li>Ожидаемый результат: 0</li>
    	  </ul>
    	</li>
    	<li>
    	  <h4>Тест Б1.3 (положительный)</h4>
    	  <ul>
    	    <li>Входные данные: -1</li>
    	    <li>Ожидаемый результат: 0</li>
    	  </ul>
    	</li>
    </ol>
  </li>
    <li>
      <h2>Метод double* realQuadraticRoots(double a, double b, double c)</h2>
    <ol>
    	<li>
    	  <h4>Тест Б2.1 (положительный)</h4>
    	  <ul>
    	    <li>Входные данные: 1 -3 2</li>
    	    <li>Ожидаемый результат: 2 1</li>
    	  </ul>
    	</li>
    	<li>
    	  <h4>Тест Б2.2 (положительный)</h4>
    	  <ul>
    	    <li>Входные данные: 1 -4 4</li>
    	    <li>Ожидаемый результат: 2 2</li>
    	  </ul>
    	</li>
    	<li>
    	  <h4>Тест Б2.3 (положительный)</h4>
    	  <ul>
    	    <li>Входные данные: 1 2 5</li>
    	    <li>
            Ожидаемый результат: 0 0   
          </li>
    	  </ul>
        <h4>Тест Б2.4 (положительный)</h4>
    	  <ul>
    	    <li>Входные данные: 1 2 3</li>
    	    <li>
            Ожидаемый результат: 0 0   
          </li>
    	  </ul>
    	</li>
    </ol>
  </li>
</ol>

# Интеграционное тестирование
<ol>
  <li>
    <h3>Тест И1</h3>
    <ul>
      <li>Методы: int fibonachi(int num), double * realQuadraticRootst(double a, double b, double c)</li>
      <li>Описание: Проверяем, можно ли использовать результат работы функции fibonachi в функции realQuadraticRoots</li>
      <li>Входные данные: fibonachi: 1, realQuadraticRoots: fibonachi(1), -4, 4</li>
      <li>Ожидаемый результат: 2</li>
    </ul>	
  </li>
  
</ol>

