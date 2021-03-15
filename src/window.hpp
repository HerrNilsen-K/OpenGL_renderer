//
// Created by karl on 15.03.21.
//

#ifndef INC_3CARDRENDERER_WINDOW_HPP
#define INC_3CARDRENDERER_WINDOW_HPP

#include <GLFW/glfw3.h>
#include <string>

class window {
public:
    typedef GLFWwindow *windowHNDL;

    static void init();

    explicit window(uint32_t width = 640, uint32_t height = 480, std::string title = "Hello Window");

    void createWindow();

    void destroyWindow();

    [[nodiscard]] bool run() const;

    [[nodiscard]] windowHNDL getHNDL() const;

    [[nodiscard]] int getKey(int key) const;

    ~window();

private:
    windowHNDL m_win;

    uint32_t m_width, m_height;
    std::string m_title;
};


#endif //INC_3CARDRENDERER_WINDOW_HPP