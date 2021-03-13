//
// Created by karl on 13.03.21.
//

#include "camera.hpp"
#include <glm/gtc/matrix_transform.hpp>

void camera::updateView(const glm::vec3 &eye, const glm::vec3 &center, const glm::vec3 &up) {
    m_view = glm::lookAt(eye, center, up);
}

glm::mat4 camera::getView() const {
    return m_view;
}

camera::camera(const glm::mat4 &view) :
        m_view(view) {}

camera::camera() :
        m_view(1.f) {}

void camera::updateModel(const glm::mat4 &model) {
    m_model = model;
}

void camera::updateProjection(const glm::mat4 &projection) {
    m_projection = projection;
}

glm::mat4 camera::getModel() const {
    return m_model;
}

glm::mat4 camera::getProjection() const {
    return m_projection;
}
