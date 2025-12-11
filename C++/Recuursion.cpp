#include<iostream>


// recursions = a programming technique where a function
//              invokes itself from within
//              break a complex problem into a single repeatable single step 

// (iterative vs recursive)

// advantages = less code and is cleaner
//              useful for sorting and searching algorithms 

// disadvantages = uses more memory
//                 slower 

// void walk (int steps);

//int main (){

  //  walk (2);

//    return 0 ;
//}

//void walk (int steps){
  //  for(int i=0 ; i <steps ; i++ ){
  //      std::cout << "you took a step !!\n";
  // }  this is how you itterate 

  // now for reccursion
//
  //if(steps > 0){
  //  std::cout << "Yaayy u took a step !!\n";
  //  walk(steps - 1);
  //}
//} 

// finding a factorial using iteration and reccursion 

int factorial(int num);

int main () {
    
    std::cout << factorial(10);

    return 0 ;
}

int factorial(int num){
    //iteration
//    int result = 1 ;
//    for(int i=1 ; i <= num ; i++ ){
//        result = result *i ;
//    }
//    return result;
    //reccursion
    if(num > 1){
        return num * factorial(num - 1 );
    }else{
        return 1;
    }
}