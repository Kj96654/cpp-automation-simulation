#include <iostream>
#include <string>
#include <thread>
#include <chrono>

void simulateLogin() {
    std::string username, password;

    std::cout << "Simulating login process...\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));

    std::cout << "Enter Username: ";
    std::cin >> username;
    std::cout << "Enter Password: ";
    std::cin >> password;

    // Simulate verification
    std::cout << "Verifying credentials...\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));

    if (username == "testuser" && password == "password") {
        std::cout << "Login successful! Welcome, " << username << "!\n";
    } else {
        std::cout << "Login failed. Please try again.\n";
    }
}

int main() {
    std::cout << "Welcome to the Automation Simulation Project\n";
    std::cout << "Running login simulation...\n";

    simulateLogin();

    return 0;
}


