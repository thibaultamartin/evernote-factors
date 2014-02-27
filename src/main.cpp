#include <iostream>

int main(int argc, char**argv) {
    int total = 1;
    std::string user_input;
    
    std::cout << "=== Factors demo ===" << std::endl;
    std::cout << "Number of elements to retrieve: ";
    std::cin >> user_input;
    
    int table_size = std::stoi(user_input);
    int in_table[table_size];
    
    std::cout << "Table of size" << table_size << " created, you may now enter your integers" << std::endl;
    
    // Filling the input table with user input
    for(int i=0; i<table_size; i++) {
        std::cin >> user_input;
        in_table[i] = std::stoi(user_input);
    }
    
    std::cout << "Processing input data..." << std::endl;
    
    // Calculating the total number of factors
    for(int i=table_size; --i>=0;) {
        total *= in_table[i];
    }
    
    std::cout << "Done !" << std::endl;
    for(int i=0; i<table_size; i++) {
        std::cout << total / in_table[i] << std::endl;
    }
}