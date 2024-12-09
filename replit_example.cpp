#include <iostream>

int main() {
  int totalCars = 0;
  int carsPerDay, averageCarsPerDay;

  for(int day = 1; day <= 5; day++){
    std::cout << "Enter the number of cars that passed on day" << day << 
      ": ";
    std::cin >> carsPerDay;
    totalCars += carsPerDay;
    
  }

  averageCarsPerDay = totalCars / 5;




  
  std::cout << "Total cars that passed in 5 days: " << totalCars << std::endl;
      std::cout << "Average cars per day: " << averageCarsPerDay << std::endl;
      return 0;
  }
