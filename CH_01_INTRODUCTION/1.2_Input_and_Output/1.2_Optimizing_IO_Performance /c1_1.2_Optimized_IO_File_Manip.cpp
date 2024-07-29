#include <iostream>
#include <string>

#include <vector>
#include <algorithm>

int main(){

// freopen will redirect input and output
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

// input: the program expects to read from "input.txt" instead of waiting for user to input through the terminal


    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

///* example 1: reading and summing multiple pairs of integers */
//    long long a, b;
//
//    while(std::cin >> a >> b){
//    std::cout<<a+b<<"\n";
//    }

///* example 2: reading and printing a string */
//    std::string line;
//    while(std::getline(stdL::cin, line)){
//        std::cout<<line<<"\n";
//    }

/* example 3: reading an array of integers and finding its maximum */
    int n;
    std::cin>>n;
    std::vector<int> arr(n);
    for(int i = 0; i<n; ++i){
        std::cin>>arr[i];
    }

    int max_val = *std::max_element(arr.begin(), arr.end());
    std::cout<<"maximum value: "<<max_val<<"\n";

}
