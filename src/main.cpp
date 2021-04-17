#include <iostream>
#include <vector>

int main(){
  std::cout << "Vector task 3" << std::endl;
  std::vector<int> vec(20);
  int value;
  for(int i = 0; i < vec.size();){
    while (value != -1){
      std::cin >> value;
      vec[i] = value;
      i++;
      if(i>20){
        vec.erase(vec.begin());
        vec.push_back(value);
      }
    }
    break;
  }
  for(int i = 0; i < vec.size(); i++){
    std::cout << vec[i] << " ";
  }  
  return 0;
}

// В базу данных, являющуюся вектором, с клавиатуры приходят 
// целочисленные значения, и помещаются в конец. Однако, эта база может 
// хранить только 20 элементов, а дальше необходимо будет удалять элементы, 
// которые лежат в базе дольше всех. 
// При вводе -1 с клавиатуры необходимо вывести всё содержимое
// базы данных (то есть 20 или менее элементов). 
// При выводе элементы должны быть в том порядке, 
// в котором они добавлялись в базу данных.
// Попробуйте написать максимально оптимизированное решение данной задачи, 
// чтобы совершалось как можно меньше расширений и 
// перемещений элементов внутри вектора.