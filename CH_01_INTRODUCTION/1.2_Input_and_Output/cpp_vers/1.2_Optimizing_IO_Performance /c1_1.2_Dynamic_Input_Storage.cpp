#include <iostream>
#include <vector>
#include <string>

/* The program reads an unknown amount of input until EOF and stores it in vectors.
 */

 int main(){
    // Make I/O more efficient
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    std::vector<int> aValues;
    std::vector<int> bValues;
    std::vector<std::string> x_values;

    // define vars to temporarily store the values
    int a, b;
    std::string x;

    // read input until EOF
    while(std::cin>>a>>b>>x){
        // store the input values into vectors
        aValues.push_back(a);
        bValues.push_back(b);
        x_values.push_back(x);
    }

    // Output the stored values
    for(size_t i = 0; i<aValues.size(); ++i){
        std::cout<<aValues[i]<<" "<<bValues[i]<<" "<<x_values[i]<<"\n";
    }


}
