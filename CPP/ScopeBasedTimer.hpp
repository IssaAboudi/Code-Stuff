/* Scope Based Timer created by following guide by Cherno on youtube:
 * https://www.youtube.com/watch?v=oEx5vGNFrLk&t=482s
 */

#include <iostream>
#include <chrono> 

struct Timer {

    std::chrono::time_point<std::chrono::high_resolution_clock> start;
    std::chrono::time_point<std::chrono::high_resolution_clock> end;
    std::chrono::duration<float> duration;

    Timer(){
        start = std::chrono::high_resolution_clock::now();
    }
    ~Timer(){
        end = std::chrono::high_resolution_clock::now();
        duration = end - start;

        float ms = duration.count() * 1000.0f;
        std::cout << "Timer took " << ms << " ms" << std::endl;
    }
};
