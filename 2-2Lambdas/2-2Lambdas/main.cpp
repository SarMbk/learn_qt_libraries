#include <iostream>

using namespace std;

int main(){

    //LAMBDA FUNCTIONS

    // auto functionName = [capture list](parameter list) {function body}
    auto func = [](){
        cout << "Hello World!" << endl;
    };


    // how to call the lamda function
    func();


    // You can call the lamda function right after you define it
    [](){
        cout << "This is func2"<< endl;
    }();


    //Defining a lamda function with 2 parameters
    auto summation = [](int a, int b){
        return a+b;
    };
    cout << summation(10, 20) << endl;


    //Defining a lamda function, calling it rightaway and specifiying return type in one line (example below will return 15
    int ans = [](int a, int b)->int{
        return a+b;
    }(7,8);
    cout << ans << endl;


    // What are lamda function capture lists?
    int a = 7, b = 3;

    // Capture list is a way to pass variables to a function
    [a, b](){
       cout << "a is : " << a << endl;
       cout << "b is : " << b << endl;
    }();


    // Capturing by value
    // when you pass a variable to the lamda function's capture list, it makes a variable copy and makes it immutable
    int c = 42;
    auto func3 = [c](){
        cout << "The inner value of c is " << c << endl;
    };

    for (int i = 1; i<5; i++){
        cout << "the outer value of c is " << c << endl;
        func3();
        c++;
    }
    cout << endl << endl;


    //Capturing by reference
    auto func4 = [&c](){
        cout << "the inner value of c is " << c << endl;
    };

    for (int i = 1; i<5; i++){
        cout << "the outer value of c is " << c << endl;
        func4();
        c++;
    }
    cout << endl << endl;



    // Capturing all variables defined inside the scope of the defined lamda function by value
    auto func5 = [=](){
        cout << "a is " << a << endl;
        cout << "b is " << b << endl;
        cout << "c is " << c << endl;
    };
    func5();
    cout << endl << endl;



    // Capturing all variable defined inside the scope of the defined lamda by reference
    auto func6 = [&](){
        cout << "a is " << ++a << endl;
        cout << "b is " << ++b << endl;
        cout << "c is " << ++c << endl;
    };
    func6();
    cout << endl << endl;




    return 0;
}
