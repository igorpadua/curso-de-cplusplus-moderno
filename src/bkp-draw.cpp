#include <iostream>

int main( int argc , char **argv ){

  int max_i = 10, max_kj = 20;

  if( argc > 2 ){
    max_i = std::stoi( argv[1] );
    max_kj = std::stoi( argv[2] );
  }

  for( int i = 0; i <= max_i; i++ ){
    if( i == 0 || i == max_i ){
      std::cout << "+";
      for( int k = 0; k <= max_kj; k++ ){
        if( k == max_kj ){
          std::cout << "+";
        }else{
          std::cout << "-";
        }
      }
      std::cout << '\n';
    }else{
      std::cout << "|";
      for( int j = 0; j <= max_kj; j++ ){
        if( j == max_kj ){
          std::cout << "|";
        }else{
          std::cout << " ";
        }
      }
      std::cout << '\n';
    }
  }
  return 0;
}
