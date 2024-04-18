#include <iostream>
#include <cstdlib>
#include <ctime>

std::string generateCompliment() {
    std::string compliments[] = {
        "You are beautiful!",
        "You have a great smile!",
        "You are incredibly smart!",
        "You have a fantastic sense of humor!",
        "You are kind-hearted and caring!",
        "You are amazing!",
        "You are talented in so many ways!",
        "You light up the room with your presence!",
        "You have a wonderful personality!",
        "You are a true inspiration!",
        "You have beautiful hair",
        "You are smart!",
        "Keep reaching your dreams, it's never too late",
        "You have a great smile!",
        "Your kindness is contagious.",
        "You're a true inspiration!",
        "You're doing great things!",
        "You're simply the best!",
        "Your positive energy is infectious!",
        "You're a ray of sunshine on a cloudy day!"
    };

    int numCompliments = sizeof(compliments) / sizeof(compliments[0]);

    int randomIndex = rand() % numCompliments;

    return compliments[randomIndex];
}

int main() {
    srand(time(0));

    std::cout << generateCompliment() << std::endl;
    
    return 0;
}
