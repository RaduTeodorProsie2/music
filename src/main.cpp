#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

int main()
{
    auto window = sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "CMake SFML Project");
    window.setFramerateLimit(144);

    sf::Music instrumental;
    const bool open = instrumental.openFromFile("../assets/songs/careless/Inst.ogg");
    
    if(!open) exit(1);

    return 0;
    
}
