#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>


int main (){
  std::random_device r;
  std::default_random_engine el(r());
  std::uniform_int_distribution<int> uniform_dist(1, 6);
  int random_number = uniform_dist(el);
  int guess;


  std::cout << "Guess the number !!!" << std::endl;
  std::cout << "In this game a random number will be selected and you have to guess the number" << std::endl;

 do{

   
    std::cout << "Guess what the number is :";
    std:: cin >> guess;
    
    
    if (random_number < guess){
        std::cout <<"The number you guessed is greater than the random number" <<std::endl;
    }
     else if(random_number > guess){
      std::cout <<"The number you guessed is less than the random number" <<std::endl;
    }
    else{
        std::cout << "You guess the right number !!!!!!!!!!!" << std::endl;
    }

 }while( guess != random_number);



    return 0;
}