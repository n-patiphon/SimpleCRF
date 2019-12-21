#include <vector>
using namespace std;

// for 2d images
template<typename T>
T get_pixel(const T * data, int height, int width, int h, int w);

template<typename T>
std::vector<T> get_pixel_vector(const T * data, int height, int width, int channel, int h, int w);

template<typename T>
void set_pixel(T * data,  int height, int width, int h, int w, T value);

template<typename T>
float get_l2_distance(std::vector<T> p1, std::vector<T> p2);

// for 3d images
template<typename T>
T get_pixel(const T * data, int depth, int height, int width, int d, int h, int w);

template<typename T>
std::vector<T> get_pixel_vector(const T * data, int depth, int height, int width, int channel, int d, int h, int w);

template<typename T>
void set_pixel(T * data,  int depth, int height, int width, int d, int h, int w, T value);